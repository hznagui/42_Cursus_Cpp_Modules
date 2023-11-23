/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:50:08 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 21:14:53 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i=0;i<4;i++)
        inventory[i]=NULL;
}
MateriaSource::MateriaSource(const  MateriaSource &obj)
{
        for (int i=0; i<4 ; i++)
        {
            if (!obj.inventory[i])
                inventory[i]=NULL;
            else
                inventory[i]=obj.inventory[i]->clone();
        }
}
MateriaSource &MateriaSource::operator=(const  MateriaSource &obj)
{
        for (int i=0; i<4 ; i++)
        {
            if (!obj.inventory[i])
                {
                if (inventory[i])
                    delete inventory[i];    
                inventory[i]=NULL;
                }
            else
            {
                if (inventory[i])
                    delete inventory[i];
                inventory[i] = obj.inventory[i]->clone();
            }
        }
        return *this;
}
void MateriaSource::learnMateria(AMateria *obj)
{
    static int i;
    if (i>=4)
    {
        delete obj;
        return;
    }
    inventory[i]=obj;
    i++;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i=0;i<4;i++)
    {
        if (type == inventory[i]->getType())
            return inventory[i]->clone();
    }
    return NULL;
}
MateriaSource::~MateriaSource()
{
      for (int i=0;i<4;i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}