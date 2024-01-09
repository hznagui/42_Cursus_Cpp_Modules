/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:35:09 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/09 16:17:21 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <class T> class Array
{
    T *array;
    public:
    ~Array()
    {
        delete[] array;
    }
    Array()
    {
        try 
        {
            array = new T[0];
        }
        catch(std::exception h)
        {
            std::cout << h.what()<<std::endl;
        }
    }
    Array(unsigned int n)
    {
        try 
        {
            array=new T[n];
        }
        catch(std::exception h)
        {
            std::cout << h.what()<<std::endl;
        }
    }
    Array(const Array &obj)
    {
        delete[] array;
        array = new obj.array;
    }
    Array &operator=(const Array &);
};
#endif