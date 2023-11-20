/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:28:16 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/20 12:53:03 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    Cure();
    Cure(const Cure&);
    Cure &operator=(const Cure&);
    ~Cure();
    AMateria *clone();
    void use(ICharacter &);
};

#endif