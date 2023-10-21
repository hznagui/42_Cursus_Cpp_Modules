/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:08:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/21 11:51:37 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is gone"<<std::endl;
}
void Zombie::set_name(std::string Name)
{
    name = Name;
}
std::string Zombie::get_name()
{
    return name;
}
