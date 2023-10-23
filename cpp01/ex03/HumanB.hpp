/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:04:08 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/23 10:58:23 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
    std::string name;
    Weapon *Weapon_;
    public:
    void attack();
    HumanB(std::string Name);
    void setWeapon(Weapon &weapon);
};

#endif