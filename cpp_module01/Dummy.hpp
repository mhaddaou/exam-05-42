/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:20:16 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:21:00 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

class Dummy : public ATarget{
    public:
        Dummy();
        ~Dummy();
        Dummy *clone() const;  
};