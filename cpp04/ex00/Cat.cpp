/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:40 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 12:43:27 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout <<"default constructor Cat called"<<std::endl;
    type="Cat";
}
Cat::Cat(const Cat &obj):Animal(obj)
{
    std::cout <<"copy constructor Cat called"<<std::endl;
}
Cat &Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    std::cout <<"copy assignment operator  Cat called"<<std::endl;
    return *this;
}
Cat::~Cat()
{
    std::cout <<"destractor Cat called"<<std::endl;
}
void Cat::makeSound()const
{
    std::cout <<"cat is meaws"<<std::endl;
}