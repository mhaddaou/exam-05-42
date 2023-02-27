/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:58:51 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 12:07:24 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook const& SpellBook::operator=(SpellBook const& other){
    _book = other._book;
    return (*this);
}

SpellBook::~SpellBook(){
    std::map<std::string, ASpell *>::iterator it = _book.begin();
    std::map<std::string, ASpell *>::iterator ite = _book.end();
    for (; it != ite; it++){
        delete it->second;
    }
    _book.clear();
}

void SpellBook::learnSpell(ASpell * spell){
    _book.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const& spellName){
    std::map<std::string, ASpell *>::iterator it = _book.find(spellName);
    if (it != _book.end())
        delete it->second;
    _book.erase(spellName);
}

ASpell *SpellBook::createSpell(std::string const& spellName){
   std::map<std::string , ASpell *>::iterator it = _book.find(spellName);
   if (it != _book.end())
        return (_book[spellName]);
    return (NULL);
}