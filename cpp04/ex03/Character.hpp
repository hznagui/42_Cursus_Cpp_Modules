/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:14:58 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/20 16:27:16 by hznagui          ###   ########.fr       */
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
    public:
    Character();//
    Character(const Character &);//
    Character &operator=(const Character&);//
    ~Character();
    Character(std::string name);//
    std::string const &getName();//
    void equip(AMateria *m);
    void unequip(int);
    void use(int,ICharacter&);
};

#endif