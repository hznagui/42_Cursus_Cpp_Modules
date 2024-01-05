/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:37:01 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/05 16:56:10 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include "Data.hpp"
class  Serialize
{
    Serialize();
    Serialize(const  Serialize&);
    ~Serialize();
    Serialize &operator=(const  Serialize &);
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
#endif