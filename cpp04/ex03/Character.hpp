/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:14:58 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/24 20:45:36 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Tmp.hpp"
class Character : public ICharacter
{
    std::string Name;
    AMateria *inventory[4];
    Tmp *header;
    Tmp *tmp;
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