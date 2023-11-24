/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:32:16 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/24 21:12:49 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMP_HPP
#define TMP_HPP

#include <iostream>
#include "AMateria.hpp"

class Tmp
{
    AMateria *p;
    Tmp *next;
    public:
    Tmp();//
    Tmp(AMateria *);//
    Tmp(const Tmp&);//
    Tmp &operator=(const Tmp&);//
    ~Tmp();//
    Tmp *get_next();
    void set_next(Tmp *);
};

#endif