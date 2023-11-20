/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:15:01 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/20 16:27:11 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    Name="hamid";
}
Character::Character(std::string name){Name=name;}
Character::Character(const Character &obj)
{
    Name=obj.getName();
    for (int i=0; i<4 ; i++)
        {
            if (!obj.inventory[i])
                inventory[i]=NULL;
            else
                inventory[i]=obj.inventory[i]->clone();
        }
}
Character &Character::operator=(const Character&obj)
{
    Name=obj.getName();
    for (int i=0; i<4 ; i++)
        {
            if (!obj.inventory[i])
                {
                if (inventory[i])
                    delete inventory[i];    
                inventory[i]=NULL;
                }
            else
            {
                if (inventory[i])
                    delete inventory[i];
                inventory[i]=obj.inventory[i]->clone();
            }
        }
}
std::string const &Character::getName(){return Name;}