/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:23 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/10 10:50:36 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout <<"the default construtor ScavTrap called "<<std::endl;
}
ScavTrap::ScavTrap(const std::string name):ClapTrap(name)
{
        std::cout <<"the Parameterized construtor ScavTrap called"<<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout <<"the copy construtor ScavTrap called"<<std::endl;
}
// ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
// {
//     ScavTrap tmp=obj;
//     set_Name(tmp.get_Name());
//     set_energy(tmp.get_energy());
//     set_Attack_points(tmp.get_Attack_points());
//     set_Hit_points(tmp.get_Hit_points());
//     std::cout <<"the assignment operator ScavTrap called"<<std::endl;
//     return *this;
// }



ScavTrap::~ScavTrap()
{
    std::cout <<"the destrutor ScavTrap called"<<std::endl;
}
