/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:52 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/08 10:39:07 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name="hamid";
    energy=10;
    Attack_points=0;
    Hit_points=10;
}

ClapTrap::ClapTrap(std::string name)
{
    Name=name;
    energy=10;
    Attack_points=0;
    Hit_points=10;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    Name=obj.Name;
    energy=obj.energy;
    Attack_points=obj.Attack_points;
    Hit_points=obj.Hit_points;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    Name=obj.Name;
    energy=obj.energy;
    Attack_points=obj.Attack_points;
    Hit_points=obj.Hit_points;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (energy>0 && Hit_points > 0)
    {
    std::cout <<"ClapTrap " << Name <<" attacks "<< target <<", causing " << Attack_points << " points of damage!"<<std::endl;
    energy--;
    }
    else 
    {
        std::cout <<"ClapTrap "<<Name<<" can't attack"<<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
if ((Hit_points-amount)>0)
{
    
}
}