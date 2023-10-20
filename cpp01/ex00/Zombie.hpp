/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:09:45 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/20 17:40:37 by hznagui          ###   ########.fr       */
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
    Zombie(std::string Name);
    
};

#endif