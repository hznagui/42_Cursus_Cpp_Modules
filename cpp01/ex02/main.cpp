/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:12:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/26 15:54:44 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string>


int main ()
{
std::string string ="HI THIS IS BRAIN";
std::string *stringPTR=&string;
std::string &stringREF=string;
std::cout << "string adress: "<<&string << std::endl ;
std::cout << "string pointer adress: "<<&stringPTR << std::endl ;
std::cout << "string reference adress: "<<&stringREF << std::endl ;

std::cout << "The value of the string variable: "<<string << std::endl ;
std::cout << "The value pointed to by stringPTR: "<<*stringPTR << std::endl ;
std::cout << "The value pointed to by stringREF: "<<stringREF << std::endl ;
}