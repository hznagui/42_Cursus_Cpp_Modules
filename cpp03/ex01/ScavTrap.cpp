/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:23 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/08 16:05:33 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout <<"the default construtor ScavTrap called "<<std::endl;
}
ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
        std::cout <<"the Parameterized construtor ScavTrap called"<<std::endl;
}
ScavTrap::ScavTrap(ScavTrap &obj):ClapTrap(ClapTrap &obj)
{
    std::cout <<"the copy construtor ClapTrap called"<<std::endl;
}



ScavTrap::~ScavTrap():~ClapTrap()
{
    std::cout <<"the destrutor ScavTrap called"<<std::endl;
}
