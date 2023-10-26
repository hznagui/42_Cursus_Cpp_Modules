/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:04:05 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/26 14:31:52 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (!this->Weapon_)
        return;
    std::cout << name << " attacks with their" << Weapon_->getType() << std::endl;
}
HumanB::HumanB(std::string Name)
{
    Weapon_=NULL;
    name = Name;
}
void HumanB::setWeapon(Weapon &weapon)
{
    Weapon_=&weapon;
}
