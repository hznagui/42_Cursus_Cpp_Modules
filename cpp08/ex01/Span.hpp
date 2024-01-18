/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:41 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 13:38:53 by hznagui          ###   ########.fr       */
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
    Span();
    Span(unsigned int);
    Span(Span &);
    Span &operator=(Span &);
    void addNumber();
    void assign();
    int  shortestSpan();
    int  longestSpan();    
};