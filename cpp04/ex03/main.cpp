/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:03:03 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 13:13:06 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main ()
{
    Character a=Character("houdayfa"),b=Character();
    Ice *ice=new Ice();
    Cure *cure=new Cure();
    a.equip(ice);
    a.equip(cure);
    b=a;
    a.use(1,a);
    
    
}