/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:08:50 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 13:08:26 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator{
    private:
        std::map<std::string, ATarget *> _arr;
    public:
        TargetGenerator();
        TargetGenerator const& operator=(TargetGenerator const& other);
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const& type);
    
};