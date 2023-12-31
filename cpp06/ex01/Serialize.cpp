/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:36:58 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/05 16:52:34 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(){};
Serialize::~Serialize(){};
Serialize &Serialize::operator=(const Serialize &obj){
    (void)obj;
    return *this;};
uintptr_t Serialize::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serialize::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
