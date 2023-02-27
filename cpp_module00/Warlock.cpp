/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:18:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 15:29:53 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
Warlock::Warlock(){}
Warlock::Warlock(std::string const& name, std::string const& title){
    _name  = name;
    _title = title;
    // <NAME>: This looks like another boring day.
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
    // <NAME>: My job here is done!
    std::cout << _name << ": My job here is done!" << std::endl;
}
std::string const& Warlock::getName() const{return (_name);}
std::string const& Warlock::getTitle() const{ return (_title);}

void Warlock::setTitle(std::string const& title){
    _title = title;
}

void Warlock::setName(std::string const& name) {
    _name = name;
}


void Warlock::introduce() const{
    // <NAME>: I am <NAME>, <TITLE>!
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
