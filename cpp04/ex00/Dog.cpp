/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:45 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 12:41:05 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout <<"default constructor Dog called"<<std::endl;
    type="Dog";
}
Dog::Dog(const Dog &obj):Animal(obj)
{
    std::cout <<"copy constructor Dog called"<<std::endl;
}
Dog &Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    std::cout <<"copy assignment operator  Dog called"<<std::endl;
    return *this;
}
Dog::~Dog()
{
    std::cout <<"destractor Dog called"<<std::endl;
}
void Dog::makeSound()const
{
    std::cout <<"Dog is barking"<<std::endl;
}