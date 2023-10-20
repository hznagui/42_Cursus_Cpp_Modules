/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:08:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/20 17:45:43 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string Name)
{
    name=Name;
}
