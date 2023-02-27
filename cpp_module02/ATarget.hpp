/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:00:01 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:35:15 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;

class ATarget{
    private:
        std::string _type;
    public:
        ATarget();
        ATarget(std::string const& type);
        ATarget(ATarget const& other);
        ATarget const& operator=(ATarget const& other);
        virtual ~ATarget();
        std::string const& getType() const;
        void getHitBySpell(ASpell const& spell) const;
        virtual ATarget *clone() const= 0;
};