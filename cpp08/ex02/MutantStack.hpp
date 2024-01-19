/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:42:59 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/19 11:20:35 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <class T> class MutantStack : public  std::stack<T>
{
    public:
    MutantStack(){}
    MutantStack(const MutantStack &obj)
    {(void)obj;}
    ~MutantStack() {}
    MutantStack &operator=(const MutantStack &obj){(void)obj;return *this;}
};