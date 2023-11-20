/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:28:18 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/20 16:15:25 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    Type="ice";
    std::cout << "Ice constructor called"<<std::endl;
}
Ice::Ice(const Ice &obj)
{
    Type=obj.Type;
    std::cout << "Ice copy constructor called"<<std::endl;
}
Ice &Ice::operator=(const Ice &obj)
{
    
    std::cout << "Ice copy assignement called"<<std::endl;
    Type=obj.Type;
    return *this;
}
Ice::~Ice()
{
    std::cout << "Ice destructor called"<<std::endl;
}
AMateria *Ice::clone()
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
    std::cout << "* shoots an ice bolt at "<<target.getName()<<" *";
}
