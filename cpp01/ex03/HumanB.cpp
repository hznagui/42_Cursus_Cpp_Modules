/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:04:05 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/23 10:58:37 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their" << Weapon_->getType() << std::endl;
}
HumanB::HumanB(std::string Name)
{
    name = Name;
}
void HumanB::setWeapon(Weapon &weapon)
{
    Weapon_=&weapon;
}
