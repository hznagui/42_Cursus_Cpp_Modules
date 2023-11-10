/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:58 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/10 15:16:23 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a1("alex"),a2,a3;
    a3=ScavTrap("mohsin");
    a3.guardGate();
    a1.attack("khalid");
    a2.attack("khalid");
    a1.takeDamage(7);
    a1.takeDamage(9);
    a1.attack("khalid");
    a1.beRepaired(9);
    a1.attack("khalid");
    a2.attack("alex");
    a2.attack("alex");
    a2.takeDamage(2);
    a2.takeDamage(2);
    a2.beRepaired(1);
}