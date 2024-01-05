/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:56:14 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/05 17:02:18 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data obj;
    obj.a=7;
    obj.b=9;
    obj.h=10;

    Data *h=Serialize::deserialize( Serialize::serialize(&obj));
    std::cout <<"a = "<< h->a << " b = " << h->b << " h = "<<h->h<<std::endl;
 }