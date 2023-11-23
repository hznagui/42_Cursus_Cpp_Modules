/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:14:58 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 12:55:37 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character : public ICharacter
{
    std::string Name;
    AMateria *inventory[4];
    AMateria *tmp[4];
    public:
    Character();//
    Character(const Character &);//
    Character &operator=(const Character&);//
    ~Character();
    Character(std::string name);//
    std::string const & getName() const;
    void equip(AMateria *m);//
    void unequip(int idx);//
    void use(int idx,ICharacter& target);//
};

#endif