/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:59:48 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/22 11:50:39 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *p=new(std::nothrow)Zombie[N];
    if (!p)
        return NULL;
    for (int i = 0 ; i < N; i++)
        p[i].set_name(name);
    return p;
}