/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:28:13 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 21:15:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria()
{
    Type="cure";
    // std::cout << "Cure constructor called"<<std::endl;
}
Cure::Cure(const Cure &obj):AMateria(obj)
{
    // std::cout << "Cure copy constructor called"<<std::endl;
}
Cure &Cure::operator=(const Cure &obj)
{
    
    // std::cout << "Cure copy assignement called"<<std::endl;
    Type=obj.Type;
    return *this;
}
Cure::~Cure()
{
    // std::cout << "Cure destructor called"<<std::endl;
}
AMateria *Cure::clone() const 
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
    std::cout << "* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}