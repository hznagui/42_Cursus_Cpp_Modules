/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:58 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/10 17:26:04 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a1("alex"),a2,a3;
    a3=FragTrap("mohsin");
    a3.highFivesGuys();
    a1.attack("khalid");
    a2.attack("khalid");
    a1.takeDamage(17);
    a1.beRepaired(9);
    a1.attack("khalid");
    a2.attack("alex");
    a2.takeDamage(21);
    a2.beRepaired(1);
}