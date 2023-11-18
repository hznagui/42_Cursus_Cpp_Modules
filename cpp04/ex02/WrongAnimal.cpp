/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:22:23 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 13:24:11 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout <<"default constructor WrongAnimal called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a1)
{
    type=a1.type;
    std::cout <<"copy constructor WrongAnimal called"<<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    type=obj.type;
    std::cout <<"copy assignement operator WrongAnimal called"<<std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"destractor WrongAnimal called"<<std::endl;
}
void WrongAnimal::makeSound()const 
{
    std::cout << "WrongAnimal braying" <<std::endl;
}
std::string WrongAnimal::getType()const {return type;}