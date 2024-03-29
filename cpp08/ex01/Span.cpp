/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:39 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/22 09:37:44 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    size=0;
}
Span::~Span(){}
Span::Span(unsigned int number) : size(number){}

Span::Span(const Span &obj)
{
    v=obj.v;
    size=obj.size;
}
Span &Span::operator=(const Span &obj)
{
    v=obj.v;
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
void Span::assign(std::vector<int>::iterator begin , std::vector<int>::iterator last)
{
    v.assign(begin,last);
}
std::vector<int>::iterator Span::begin()
{
    return v.begin();
}
std::vector<int>::iterator Span::end()
{
    return v.end();
}
int Span::shortestSpan()
{
    if (v.size()<=1)
        throw std::exception();
    std::vector<int> sorted = v;
    std::sort(sorted.begin(),sorted.end());
    int ret=INT_MAX , tmp=0;
    std::vector<int>::iterator begin=sorted.begin(), ending = begin+1;
    while (begin != sorted.end()-1)
    {
        tmp = *ending - *begin;
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
