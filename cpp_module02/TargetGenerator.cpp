/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:15:46 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/27 13:12:20 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator const& TargetGenerator::operator=(TargetGenerator const& other){
    _arr = other._arr;
    return (*this);
}
TargetGenerator::~TargetGenerator(){
    std::map<std::string, ATarget *>::iterator it = _arr.begin();
    for(; it!= _arr.end(); ++it){
        delete it->second;
    }
    _arr.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
    _arr.insert(std::pair<std::string, ATarget *>(target->getType(),target->clone()));
}
void TargetGenerator::forgetTargetType(std::string const& type){
    std::map<std::string, ATarget *>::iterator it = _arr.find(type);
    if (it != _arr.end())
        delete it->second;
    _arr.erase(type);
}

ATarget *TargetGenerator::createTarget(std::string const& type){
    ATarget *target = _arr[type];
    if (target)
        return target;
    return NULL;
}