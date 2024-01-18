/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:39 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 15:36:55 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    size=0;
}
Span::Span(unsigned int number)
{
    size=number;
}
Span::Span(Span &obj)
{
    size=obj.size;
}
Span &Span::operator=(Span &obj)
{
    size=obj.size;
    return *this;
}
void Span::addNumber(int nbr)
{
    if (v.size() == size)
        throw std::exception();
    else
        v.push_back(nbr);
}
void Span::assign(int nbr)
{
    v.assign(size,nbr);
}
int Span::shortestSpan()
{
    if (v.size()<=1)
        throw std::exception();
    std::vector<int> sorted = v;
    std::sort(sorted.begin(),sorted.end());
    int ret=0,tmp=0;
    std::vector<int>::iterator begin=sorted.begin(), ending = begin+1;
    while (begin != sorted.end())
    {
        tmp=*ending-*begin;
        if (tmp < ret)
            ret = tmp;
        begin++;
        ending++;
    }
    return ret;
}
int Span::longestSpan()
{
    if (v.size()<=1)
        throw std::exception();
    std::vector<int> sorted = v;
    std::sort(sorted.begin(),sorted.end());
    return sorted.back()-sorted.front();
}
