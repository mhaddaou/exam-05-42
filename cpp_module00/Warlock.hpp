/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:14:20 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 15:32:17 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Warlock{
    private:
        std::string _name;
        std::string _title;
    public:
        Warlock();
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();
        std::string const& getName() const;
        std::string const& getTitle() const;
        void setTitle(std::string const& title);
        void setName(std::string const & name);
        void introduce() const;
};
