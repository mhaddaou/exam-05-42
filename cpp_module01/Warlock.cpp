/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:39:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:37:55 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(std::string const& name, std::string const& title){
    _name = name;
    _title = title;
    // <NAME>: This looks like another boring day.
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
    // <NAME>: My job here is done!
    std::cout << _name << ": My job here is done!" << std::endl;
}
std::string const& Warlock::getName() const{return (_name);}
std::string const& Warlock::getTitle() const{return (_title);}
void Warlock::setTitle(std::string const& title) {
    _title = title;
}

void Warlock::introduce() const{
    // <NAME>: I am <NAME>, <TITLE>!
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    _arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}
void Warlock::forgetSpell(std::string spellName){
    std::map<std::string, ASpell *>::iterator it = _arr.find(spellName);
    if (it != _arr.end())
        delete it->second;
    _arr.erase(spellName);
}
void Warlock::launchSpell(std::string spellName, ATarget const& target){
    ASpell *speel = _arr[spellName];
    if (speel)
        speel->launch(target);
}