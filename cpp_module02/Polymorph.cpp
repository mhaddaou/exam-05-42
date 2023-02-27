/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:47:27 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 10:48:51 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph():ASpell("Polymorph", "turned into a critter"){}
Polymorph::~Polymorph(){}
Polymorph *Polymorph::clone() const{
    return (new Polymorph());
}