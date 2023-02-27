/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:00:03 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:16:36 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(std::string const& type){
    _type = type;
}
ATarget::ATarget(ATarget const& other){
    *this = other;
}
ATarget const& ATarget::operator=(ATarget const &other){
    _type = other._type;
    return (*this);
}
ATarget::~ATarget(){}
std::string const& ATarget::getType() const{
    return (_type);
}
void ATarget::getHitBySpell(ASpell const& spell) const{
    // <TYPE> has been <EFFECTS>!
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}



