/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:52 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/10 15:13:41 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    set_Name("hamid");
    set_energy(10);
    set_Attack_points(0);
    set_Hit_points(10);
    std::cout <<"the default construtor called"<<std::endl;
}
ClapTrap::~ClapTrap()
{

    std::cout <<"the destrutor called"<<std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
    set_Name(name);
    set_energy(10);
    set_Attack_points(0);
    set_Hit_points(10);
    std::cout <<"the Parameterized construtor called"<<std::endl;
}

ClapTrap::ClapTrap(const  ClapTrap &obj)
{
    ClapTrap tmp=obj;
   set_Name(tmp.get_Name());
    set_energy(tmp.get_energy());
    set_Attack_points(tmp.get_Attack_points());
    set_Hit_points(tmp.get_Hit_points());
    std::cout <<"the copy construtor called"<<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    ClapTrap tmp=obj;
    set_Name(tmp.get_Name());
    set_energy(tmp.get_energy());
    set_Attack_points(tmp.get_Attack_points());
    set_Hit_points(tmp.get_Hit_points());
    std::cout <<"the assignment operator called"<<std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (get_energy()>0 && get_Hit_points() > 0)
    {
    std::cout <<"ClapTrap " << get_Name() <<" attacks "<< target <<", causing " << get_Attack_points() << " points of damage!"<<std::endl;
    set_energy(get_energy()-1);
    }
    else 
    {
        std::cout <<"ClapTrap "<<get_Name()<<" can't attack"<<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
        std::cout <<"ClapTrap " << get_Name() <<" take dammage "<< amount <<" points of damage!"<<std::endl;
    if (get_Hit_points()>amount)
    {
        set_Hit_points(get_Hit_points()-amount);
    }
    else
        set_Hit_points(0);
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if ((get_energy() > 0))
    {
        std::cout <<"ClapTrap " << get_Name() <<" repairing him self and get "<< amount <<" points of hit!"<<std::endl;
        set_energy(get_energy()-1);
        if ((get_Hit_points() + amount)>10)
            set_Hit_points(10);
        else 
            set_Hit_points (get_Hit_points()+amount);
    }
    else 
    {
        std::cout <<"ClapTrap "<<get_Name()<<" can't repairing"<<std::endl;
    }
}
void ClapTrap::set_Name( std::string name){Name=name;}
void ClapTrap::set_Hit_points( unsigned int hit){Hit_points=hit;}
void ClapTrap::set_energy( unsigned int Energy){energy = Energy;}
void ClapTrap::set_Attack_points( unsigned int Attack){Attack_points=Attack;}

std::string ClapTrap::get_Name(void){return Name;}
unsigned int ClapTrap::get_Hit_points(void){return Hit_points;}
unsigned int ClapTrap::get_energy(void){return energy;}
unsigned int ClapTrap::get_Attack_points(void){return Attack_points;}