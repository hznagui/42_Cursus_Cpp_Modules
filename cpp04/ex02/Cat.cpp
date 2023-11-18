/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:40 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/18 13:17:25 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout <<"default constructor Cat called"<<std::endl;
    type="Cat";
    brain=new(std::nothrow) Brain();
    if (!brain)
        std::cout<< "malloc problem"<<std::endl;
}
Cat::Cat(const Cat &obj):Animal(obj)
{
    brain=new(std::nothrow) Brain(*obj.brain);
    if (!brain)
        std::cout<< "malloc problem"<<std::endl;
    std::cout <<"copy constructor Cat called"<<std::endl;
}
Cat &Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    brain->operator=(*obj.brain);
    std::cout <<"copy assignment operator  Cat called"<<std::endl;
    return *this;
}
Cat::~Cat()
{
    delete brain;
    std::cout <<"destractor Cat called"<<std::endl;
}
void Cat::makeSound()const
{
    std::cout <<"cat is meaws"<<std::endl;
}