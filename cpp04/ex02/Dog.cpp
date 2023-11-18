/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:45 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/18 13:17:12 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout <<"default constructor Dog called"<<std::endl;
    type="Dog";
    brain=new(std::nothrow) Brain();
    if (!brain)
        std::cout<< "malloc problem"<<std::endl;
}
Dog::Dog(const Dog &obj):Animal(obj)
{
    brain=new(std::nothrow) Brain(*obj.brain);
    if (!brain)
        std::cout<< "malloc problem"<<std::endl;
    std::cout <<"copy constructor Dog called"<<std::endl;
}
Dog &Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    brain->operator=(*obj.brain);
    std::cout <<"copy assignment operator  Dog called"<<std::endl;
    return *this;
}
Dog::~Dog()
{
    delete brain;
    std::cout <<"destractor Dog called"<<std::endl;
}
void Dog::makeSound()const
{
    std::cout <<"Dog is barking"<<std::endl;
}