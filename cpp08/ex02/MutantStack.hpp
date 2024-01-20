/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:42:59 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/20 19:38:43 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <deque>

template <class T, class container = std::deque<T> > class MutantStack : public  std::stack<T,container>
{
    public:
        typedef typename std::conatiner::iterator iterator;
    MutantStack(){}
    MutantStack(const MutantStack &obj){(void)obj;}
    ~MutantStack() {}
    MutantStack &operator=(const MutantStack &obj){(void)obj;return *this;}
    iterator begin()
    {
        return std::stack<T,container>::c.begin();
    }
    iterator end()
    {
        return std::stack<T,container>::c.end();
    }
      
};