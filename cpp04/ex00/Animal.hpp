/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:38 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 14:03:09 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>

class Animal
{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal&);
    Animal &operator=(const Animal&);
    virtual ~Animal();
    std::string getType()const ;
    virtual void makeSound() const;
};

#endif