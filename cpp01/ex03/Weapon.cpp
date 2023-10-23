/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:04:13 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/23 10:58:56 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(){return type;}
void Weapon::setType(std::string name)
{
    type =name;
}
Weapon::Weapon(std::string name)
{
    type = name;
}