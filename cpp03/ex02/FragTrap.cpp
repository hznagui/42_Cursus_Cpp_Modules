/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:19:10 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/10 15:35:58 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    set_energy(100);
    set_Attack_points(30);
    set_Hit_points(100);
    std::cout <<"the default construtor FragTrap called "<<std::endl;
}
FragTrap::FragTrap(const std::string name):ClapTrap(name)
{
    set_energy(100);
    set_Attack_points(30);
    set_Hit_points(100);
        std::cout <<"the Parameterized construtor FragTrap called"<<std::endl;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    set_energy(100);
    set_Attack_points(30);
    set_Hit_points(100);
    std::cout <<"the copy construtor FragTrap called"<<std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    ClapTrap::operator=(obj); 
    std::cout <<"the assignment operator FragTrap called"<<std::endl;
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout <<"highfive !!!"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout <<"the destrutor FragTrap called"<<std::endl;
}
