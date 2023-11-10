/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:21 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/09 11:10:54 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARVTRAP_HPP
#define SCARVTRAP_HPP

#include<iostream>

#include "ClapTrap.hpp"


class ScavTrap:public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap &obj);
    ScavTrap& operator=(const ScavTrap &obj);
    ~ScavTrap();
    void guardGate();
};
#endif