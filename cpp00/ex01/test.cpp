/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:00:32 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/15 17:05:29 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>


// class PhoneBook
// {
    
// }

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public:
    void set_first_name(std::string a){first_name=a;}
    std::string get_first_name(void){return first_name;}
    Contact();
    ~Contact();
};
Contact::Contact()
    {
        
    } 
Contact::~Contact()
    {
        std::cout << "sf salat" << std::endl;
    }
    

int add(Contact *a)
{
    std::string str;
            std::cout << "first_name : ";
        std::getline(std::cin, str);
        if (! str[0])
            return ( std::cout << "kteb xi haja al 9lawi!"<< std::endl,1);
        else
            a->set_first_name(str);
        std::cout<< a->get_first_name() <<std::endl;
    return 0; 
}  
int main()
{
    Contact a1;
    add(&a1);
    // std::cout <<"a1 = "<< a1.a << " a2 = "<< a2.a << std::endl;
    // a1.a++;
    // std::cout <<"a1 = "<< a1.a << " a2 = "<< a2.a << std::endl;
}