/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:36 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/21 11:09:31 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try {
    Span sp = Span(5);
    Span a;
    std::vector<int> y(5,6);
    y.push_back(7);
    a.assign(y.begin(),y.end());
    sp.addNumber(3);
    sp.addNumber(6);
    sp.addNumber(30);
    sp.addNumber(9);
    sp.addNumber(19);
    
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;}
    catch (std::exception &a)
    {
        std::cout << a.what()<<std::endl;
    }
    return 0;
}
