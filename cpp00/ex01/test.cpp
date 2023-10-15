/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:00:32 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/15 16:49:11 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>


class PhoneBook
{
    
}

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public:
    Contact();
    ~Contact();
};
Contact::Contact()
    {
        std::cout << "first_name : ";
        std::getline(std::cin, first_name);
        if (! first_name[0])
            std::cout << "kteb xi haja al 9lawi!"<< std::endl;
    } 
Contact::~Contact()
    {
        std::cout << "sf salat" << std::endl;
    }     
int main()
{
    Contact a1;
    // std::cout <<"a1 = "<< a1.a << " a2 = "<< a2.a << std::endl;
    // a1.a++;
    // std::cout <<"a1 = "<< a1.a << " a2 = "<< a2.a << std::endl;
}