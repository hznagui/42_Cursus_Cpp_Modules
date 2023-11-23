/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:28:18 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 15:39:54 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria()
{
    Type="ice";
    // std::cout << "Ice constructor called"<<std::endl;
}
Ice::Ice(const Ice &obj):AMateria(obj)
{
    // std::cout << "Ice copy constructor called"<<std::endl;
}
Ice &Ice::operator=(const Ice &obj)
{
    
    // std::cout << "Ice copy assignement called"<<std::endl;
    Type=obj.Type;
    return *this;
}
Ice::~Ice()
{
    // std::cout << "Ice destructor called"<<std::endl;
}
AMateria *Ice::clone() const 
{
    AMateria*tmp=new(std::nothrow)Ice();
    if (!tmp)
    {
        std::cout <<"malloc problem "<<std::endl;
        return NULL;
    }
    return tmp;
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}
