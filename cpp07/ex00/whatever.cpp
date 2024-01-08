/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:32:07 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/08 17:42:09 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <class T> void  swap(T *b, T *a)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}
template <class T> T  min(T b, T a)
{
    return (( a > b) ? b : a);
}
template <class T> T  max(T b, T a)
{
    return (( a < b) ? b : a);
}