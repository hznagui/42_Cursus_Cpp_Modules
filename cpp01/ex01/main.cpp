/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:12:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/26 14:34:23 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int number=5;
    Zombie *p1=zombieHorde(number,"sa3id");
    if (!p1)
        return 1;
    int i = 0;
while (i<number)
{
    std::cout << "nomber "<< i<<" ";
    p1[i].announce();
    i++;
}
    
    delete []p1;
}