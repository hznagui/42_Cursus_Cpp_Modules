/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:12:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/25 15:30:03 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *ret=new(std::nothrow) Zombie(name);
    if (!ret)
        return NULL;
    return ret;
}
void randomChump( std::string name )
{
    Zombie *ret = newZombie(name);
    if (!ret)
    {
        std::cout <<name<< " problem in allocation"<< std::endl;
        return;
    }
    ret->announce();
    delete ret;   
}

int main ()
{
    Zombie *p1=newZombie("tom"),*p2=newZombie("jerry");
    if (!p1 || !p2)
        return 1;
    p1->announce();
    p2->announce();
    randomChump("sa3id");
    delete p1;
    delete p2;
}