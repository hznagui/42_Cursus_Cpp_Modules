/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:42:59 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/19 17:04:55 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <deque>

template <class T> class MutantStack : public  std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
    MutantStack(){}
    MutantStack(const MutantStack &obj)
    {(void)obj;}
    ~MutantStack() {}
    MutantStack &operator=(const MutantStack &obj){(void)obj;return *this;}
    iterator begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator end()
    {
        return std::stack<T>::c.end();
    }
      
};