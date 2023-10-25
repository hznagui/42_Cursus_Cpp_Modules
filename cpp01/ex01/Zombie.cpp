/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:08:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/25 15:39:43 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}
Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << name <<" destructor is called "<<std::endl;
}
void Zombie::set_name(std::string Name)
{
    name = Name;
}
std::string Zombie::get_name()
{
    return name;
}
