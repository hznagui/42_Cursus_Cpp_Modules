/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:58 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/08 10:25:19 by hznagui          ###   ########.fr       */
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
}