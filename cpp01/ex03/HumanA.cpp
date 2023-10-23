/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:04:00 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/23 10:58:02 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their" << Weapon_->getType() << std::endl;
}
HumanA::HumanA(std::string Name, Weapon &weapon)
{
    name =Name;
    Weapon_ = &weapon;
}
