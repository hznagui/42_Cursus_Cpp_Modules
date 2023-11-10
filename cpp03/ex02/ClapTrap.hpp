/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:35:55 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/09 11:00:23 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    std::string Name;
    unsigned int Hit_points;
    unsigned int energy;
    unsigned int Attack_points;
    public:
    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap &operator=(const  ClapTrap &obj);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    void set_Name( std::string);
    void set_Hit_points( unsigned int);
    void set_energy( unsigned int);
    void set_Attack_points( unsigned int);
    
    std::string get_Name(void);
    unsigned int get_Hit_points(void);
    unsigned int get_energy(void);
    unsigned int get_Attack_points(void);
};



#endif