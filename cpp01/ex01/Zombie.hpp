/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:09:45 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/22 11:51:17 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <string>


class Zombie
{
    std::string name;
    public:
    void announce( void );
    ~Zombie();
    void set_name(std::string Name);
    std::string get_name();
};
Zombie* zombieHorde( int N, std::string name );

#endif