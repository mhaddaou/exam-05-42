/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:50:30 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 10:52:25 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall():ATarget("Inconspicuous Red-brick Wall"){}
BrickWall::~BrickWall(){}

BrickWall *BrickWall::clone() const{
    return (new BrickWall());
}