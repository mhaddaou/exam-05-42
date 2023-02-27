/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:55:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:17:00 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::ASpell(std::string const& name, std::string const& effects){
    _name = name;
    _effects  = effects;
}
ASpell::ASpell(ASpell const& other){
    *this = other;
}
ASpell const& ASpell::operator=(ASpell const& other){
    _name = other._name;
    _effects = other._effects;
    return (*this);
}
ASpell::~ASpell(){}
std::string ASpell::getName() const{return (_name);}
std::string ASpell::getEffects() const{return (_effects);}

void ASpell::launch(ATarget const& target){
    target.getHitBySpell((*this));
}