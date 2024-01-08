/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:32:10 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/08 17:52:32 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T> void swap(T &b, T &a)
{
    T tmp = a;
    a = b;
    b = tmp;
}
template <class T> T  min(T b, T a)
{
    return (( a > b) ? b : a);
}
template <class T> T  max(T b, T a)
{
    return (( a < b) ? b : a);
}

#endif