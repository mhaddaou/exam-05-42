/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:53:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 11:04:43 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <utility>
#include "ASpell.hpp"

class ASpell;

class SpellBook{
    private:
        std::map<std::string, ASpell *> _book;
    public:
        SpellBook();
        SpellBook const& operator=(SpellBook const& other);
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const & spellName);
        ASpell* createSpell(std::string const & spellName);
};