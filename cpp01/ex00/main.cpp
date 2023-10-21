/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:12:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/21 11:57:34 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *ret=new Zombie;
    if (!ret)
        return NULL;
    ret->set_name(name);
    return ret;
}
void randomChump( std::string name )
{
    Zombie *ret = newZombie(name);
    if (!ret)
    {
        std::cout << "problem in allocation"<< std::endl;
        return;
    }
    ret->announce();
    delete ret;   
}