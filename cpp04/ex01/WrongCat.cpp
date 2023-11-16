/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:47:30 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 13:42:02 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout <<"default constructor WrongCat called"<<std::endl;
    type="WrongCat";
}
WrongCat::WrongCat(const WrongCat &obj):WrongAnimal(obj)
{
    std::cout <<"copy constructor WrongCat called"<<std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    WrongAnimal::operator=(obj);
    std::cout <<"copy assignment operator  WrongCat called"<<std::endl;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout <<"destractor WrongCat called"<<std::endl;
}
void WrongCat::makeSound()const
{
    std::cout <<"WrongCat is barking"<<std::endl;
}