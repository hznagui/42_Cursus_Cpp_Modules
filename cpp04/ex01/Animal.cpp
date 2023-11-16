/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:36 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 12:34:32 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout <<"default constructor Animal called"<<std::endl;
}

Animal::Animal(const Animal &a1)
{
    type=a1.type;
    std::cout <<"copy constructor Animal called"<<std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    type=obj.type;
    std::cout <<"copy assignement operator Animal called"<<std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout <<"destractor Animal called"<<std::endl;
}
void Animal::makeSound()const 
{
    std::cout << "animal bleats" <<std::endl;
}
std::string Animal::getType()const {return type;}