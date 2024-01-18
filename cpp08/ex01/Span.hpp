/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:41 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 16:06:11 by hznagui          ###   ########.fr       */
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
    Span();//
    Span(Span &);//
    Span &operator=(Span &);//
    void addNumber(int);//
    void assign(int);//
    int  shortestSpan();
    int  longestSpan();    
};