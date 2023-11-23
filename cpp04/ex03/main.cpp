/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:03:03 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 14:05:03 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
void test()
{
    system("leaks Character");
}
int main ()
{
    atexit(test);
    Character a=Character("houdayfa"),b=Character();
    Ice *ice=new Ice();
    Ice *ice2=new Ice();
    Ice *ice3=new Ice();
    Cure *cure=new Cure();
    a.equip(ice);
    a.equip(ice2);
    a.equip(ice3);
    a.equip(cure);
    b=a;
    a.use(1,a);
    
    
}