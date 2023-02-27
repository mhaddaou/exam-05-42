/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:20:18 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:22:25 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy():ATarget("Target Practice Dummy"){}
Dummy::~Dummy(){    }
Dummy *Dummy::clone() const{
    return (new Dummy());
}