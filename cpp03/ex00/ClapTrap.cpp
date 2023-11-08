/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:52 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/08 11:11:03 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name="hamid";
    energy=10;
    Attack_points=0;
    Hit_points=10;
    std::cout <<"the default construtor called"<<std::endl;
}
ClapTrap::~ClapTrap()
{

    std::cout <<"the destrutor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    Name=name;
    energy=10;
    Attack_points=0;
    Hit_points=10;
    std::cout <<"the Parameterized construtor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    Name=obj.Name;
    energy=obj.energy;
    Attack_points=obj.Attack_points;
    Hit_points=obj.Hit_points;
    std::cout <<"the copy construtor called"<<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    Name=obj.Name;
    energy=obj.energy;
    Attack_points=obj.Attack_points;
    Hit_points=obj.Hit_points;
    std::cout <<"the assignment operator called"<<std::endl;
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
        std::cout <<"ClapTrap " << Name <<" take dammage "<< amount <<" points of damage!"<<std::endl;
    if (Hit_points>amount)
    {
        Hit_points-=amount;
    }
    else
        Hit_points=0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if ((energy > 0))
    {
        std::cout <<"ClapTrap " << Name <<" repairing him self "<< amount <<" and get points of hit!"<<std::endl;
        energy--;
        if ((Hit_points + amount)>10)
            Hit_points = 10;
        else 
            Hit_points += amount;
    }
    else 
    {
        std::cout <<"ClapTrap "<<Name<<" can't repairing"<<std::endl;
    }
}