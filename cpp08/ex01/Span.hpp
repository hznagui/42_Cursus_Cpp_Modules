/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:41 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 15:00:48 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
class Span
{
    std::vector<int> v;
    unsigned int size;
    public:
    Span();//
    Span(unsigned int);//
    Span(Span &);//
    Span &operator=(Span &);//
    void addNumber(int);//
    void assign(int);//
    int  shortestSpan();
    int  longestSpan();    
};