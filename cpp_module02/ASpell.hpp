/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:52:06 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 11:07:15 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"
class ATarget;

class ASpell{
    private:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        ASpell(std::string const& name, std::string const& effects);
        ASpell(ASpell const& other);
        ASpell const& operator=(ASpell const& other);
        virtual ~ASpell();
        std::string getName() const;
        std::string getEffects() const;
        void setName(std::string const& name);
        void launch(ATarget const& target);
        virtual ASpell *clone() const = 0;
    
};