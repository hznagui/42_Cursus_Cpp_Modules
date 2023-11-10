/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:23 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/10 15:11:37 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    set_energy(50);
    set_Attack_points(20);
    set_Hit_points(100);
    std::cout <<"the default construtor ScavTrap called "<<std::endl;
}
ScavTrap::ScavTrap(const std::string name):ClapTrap(name)
{
    set_energy(50);
    set_Attack_points(20);
    set_Hit_points(100);
        std::cout <<"the Parameterized construtor ScavTrap called"<<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    set_energy(50);
    set_Attack_points(20);
    set_Hit_points(100);
    std::cout <<"the copy construtor ScavTrap called"<<std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    
    std::cout <<"the assignment operator ScavTrap called"<<std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout <<"the ScavTrap is now in Gate keeper mode."<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout <<"the destrutor ScavTrap called"<<std::endl;
}
