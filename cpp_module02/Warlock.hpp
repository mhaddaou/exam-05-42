/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:39:11 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 11:10:24 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include <utility>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class SpellBook;
class Warlock{
    private:
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell *> _arr;
        SpellBook _spellBook;
    public:
        Warlock();
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();
        std::string const& getName() const;
        std::string const& getTitle() const;
        void setTitle(std::string const& title) ;
        void introduce() const;
        void learnSpell(ASpell *spell) ;
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const& target);  
};