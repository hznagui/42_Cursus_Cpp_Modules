/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:10:04 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/14 17:00:58 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureaucrat a("houdayfa",4),b("ana",150);
        std::cout << a <<std::endl; 
        a.increment();
        a.increment();
        a.increment();
        std::cout << a <<std::endl;
        b.decrement();
        b.decrement();
        std::cout << b <<std::endl;
        b.decrement();
        b.decrement();
        
    }
    catch (std::exception &e)
    {
        std::cout << "error : "<< e.what()<<std::endl;
    }
}