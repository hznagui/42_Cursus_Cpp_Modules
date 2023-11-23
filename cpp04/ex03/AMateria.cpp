/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:03:01 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 12:45:32 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout<<"AMateria constructor called"<<std::endl;
}
AMateria::AMateria(const AMateria &obj)
{
    Type=obj.Type;
    std::cout<<"AMateria copy constructor called"<<std::endl;
}
AMateria::AMateria(std::string const &type)
{
    Type=type;
    std::cout<<"AMateria parameterized constructor called"<<std::endl;
}
AMateria::~AMateria()
{
    std::cout<<"AMateria destructor called"<<std::endl;
}
AMateria &AMateria::operator=(const AMateria &obj)
{
    Type=obj.Type;
    std::cout<<"AMateria copy assignement operator called"<<std::endl;
    return *this;

}

std::string const &AMateria::getType()const{return Type;}

void AMateria::use(ICharacter &target)
{
    (void)target;
}