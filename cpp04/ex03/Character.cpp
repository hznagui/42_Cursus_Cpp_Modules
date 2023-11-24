/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:15:01 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/24 21:16:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    Name="hamid";
        for (int i=0; i<4 ; i++){
                inventory[i]=NULL;
        }
                header= NULL;
                tmp= NULL;
}
   
Character::Character(std::string name)
{
    Name=name;
    for (int i=0; i<4 ; i++)
    {
        inventory[i]=NULL;

    }
   header= NULL;
   tmp= NULL;
}
Character::Character(const Character &obj)
{
    Name=obj.getName();
    tmp=NULL;
    header= NULL;
    
    for (int i=0; i<4 ; i++)
    {
        if (!obj.inventory[i])
            inventory[i]=NULL;
        else
            inventory[i]=obj.inventory[i]->clone();
    }
}
Character &Character::operator=(const Character&obj)
{
    Name=obj.getName();
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
        tmp = header;
       while (tmp)
       {
        tmp=tmp->get_next();
        delete header;
        header=tmp;
       }
        
        return *this;
}
std::string const &Character::getName()const {return Name;}

void Character::equip(AMateria *m)
{
    
    for(int i=0;i<4;i++)
    {
        if (inventory[i]==m) 
            return;
    }
    
    for(int i=0;i<4;i++)
    {
        if (!inventory[i])
        {
            inventory[i]=m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 4 || idx < 0 || !inventory[idx])
        return ;
    tmp = header;
    if (tmp)
    {
    while (tmp->get_next())
        tmp=tmp->get_next();
    tmp->set_next(new(std::nothrow)Tmp(inventory[idx]));
    if (!tmp->get_next())
        {
            std::cout<<"malloc error "<<std::endl;
            return ;
        }
    }
    else 
    {
        header=new(std::nothrow)Tmp(inventory[idx]);
        if (!header)
        {
            std::cout<<"malloc error "<<std::endl;
            return ;
        }
    }
    inventory[idx]=NULL;
}
void Character::use(int idx,ICharacter &target)
{
        if (idx >= 4 || idx < 0 || !inventory[idx])
        {
            std::cout <<"there is nothing to do use"<<std::endl;
            return ;
        }
    inventory[idx]->use(target);       
}
Character::~Character()
{
    // std::cout << "Character destructor called"<<std::endl;
    for (int i=0; i<4 ; i++)
    {       
        if(inventory[i])
            delete inventory[i];
    }
    tmp = header;
    while (tmp)
    {
        tmp=tmp->get_next();
        delete header;
        header=tmp;
    }
}