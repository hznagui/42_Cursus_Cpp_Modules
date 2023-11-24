/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:32:13 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/24 21:08:17 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tmp.hpp"

Tmp::Tmp()
{
    next=NULL;
    p=NULL;
}

Tmp::Tmp(AMateria *P)
{
    p=P;
    next=NULL;
}
Tmp::Tmp(const Tmp &obj)
{
    p=obj.p;
    next=obj.next;
}
Tmp& Tmp::operator=(const Tmp &obj)
{
    p=obj.p;
    next=obj.next;
    return *this;
}
Tmp::~Tmp()
{
    delete p;
    next=NULL;
}
Tmp *Tmp::get_next(){return next;}
void Tmp::set_next(Tmp *NEXT)
{
    next=NEXT;
}