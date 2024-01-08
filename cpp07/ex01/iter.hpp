/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:58:25 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/08 18:21:02 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP 
#define ITER_HPP

#include<iostream>

template <class T> void iter (T array[],int length , void (*pointer)(T &))
{
    for (int i=0;i<length ;i++)
        pointer(array[i]);
}
#endif