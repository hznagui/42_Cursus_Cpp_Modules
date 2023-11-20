/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:28:13 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/20 13:15:48 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    Type="cure";
    std::cout << "Cure constructor called"<<std::endl;
}
Cure::Cure(const Cure &obj)
{
    Type=obj.Type;
    std::cout << "Cure copy constructor called"<<std::endl;
}
Cure &Cure::operator=(const Cure &obj)
{
    
    std::cout << "Cure copy assignement called"<<std::endl;
    Type=obj.Type;
}
Cure::~Cure()
{
    std::cout << "Cure destructor called"<<std::endl;
}
AMateria *Cure::clone()
{
    AMateria*tmp=new(std::nothrow)Cure();
    if (!tmp)
    {
        std::cout <<"malloc problem "<<std::endl;
        return NULL;
    }
    return tmp;
}
void Cure::use(ICharacter &target)
{
    std::cout << "* shoots an Cure bolt at "<<target.getName()<<" *";
}