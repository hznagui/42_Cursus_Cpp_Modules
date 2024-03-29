/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:41 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/22 09:36:53 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <limits.h>
#include <stdexcept>
class Span
{
    std::vector<int> v;
    unsigned int size;
    public:
    Span(unsigned int);
    Span();
    ~Span();
    Span(const Span &);
    Span &operator=(const Span &);
    void addNumber(int);
    void  assign(std::vector<int>::iterator ,std::vector<int>::iterator);
    std::vector<int>::iterator begin();
    std::vector<int>::iterator end();
    
    
    int  shortestSpan();
    int  longestSpan();    
};