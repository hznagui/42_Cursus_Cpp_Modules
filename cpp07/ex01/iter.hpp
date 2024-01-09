/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:58:25 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/09 10:57:20 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP 
#define ITER_HPP

#include<iostream>

template <class T, class H> void iter (T array[],int length , H (pointer))
{
    for (int i=0; i<length ;i++)
        pointer(array[i]);
}
#endif