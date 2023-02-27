/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:41:42 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 10:46:05 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball():ASpell("Fireball", "burnt to a crisp"){}
Fireball::~Fireball(){}

Fireball *Fireball::clone() const{
    return (new Fireball());
}