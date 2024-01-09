/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:35:09 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/09 18:19:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <class T> class Array
{
    T *array;
    int length;
    public:
    ~Array()
    {
        delete[] array;
    }
    Array()
    {
        try 
        {
            length=0;
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
            length=n;
            array=new T[n];
        }
        catch(std::exception h)
        {
            std::cout << h.what()<<std::endl;
        }
    }
    Array(const Array &obj)
    {
        try
        {
        length = obj.length;
        array = new T[length];
        for (int i=0;i<length;i++)
            array[i]=obj.array[i];
        }
        catch(std::exception h)
        {
            std::cout << h.what()<<std::endl;
        }
        
    }
    Array &operator=(const Array &obj)
    {
        try
        {
            delete[] array;
            length = obj.length;
            array = new T[length];
            for (int i=0;i<length;i++)
                array[i] = obj.array[i];
        }
        catch(std::exception h)
        {
            std::cout << h.what()<<std::endl;
        }
    }
    T &operator[](int n)
    {
        if (n < 0 || n >= length)
            throw std::exception() ;
        else
            return (array[n]);
    }
    int size(){return length;}
};

#endif