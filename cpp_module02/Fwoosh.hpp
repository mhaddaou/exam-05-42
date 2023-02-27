/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:17:15 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/02/26 21:19:52 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Fwoosh: public ASpell{
    public:
        Fwoosh();
        ~Fwoosh();
        Fwoosh *clone() const;
};