/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:00:32 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/15 17:59:23 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public:
    
    void set_first_name(std::string a);
    void set_last_name(std::string a);
    void set_nickname(std::string a);
    void set_phone_number(std::string a);
    void set_darkest_secret(std::string a);

    std::string get_first_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    std::string get_phone_number(void);
    std::string get_darkest_secret(void);
    
    Contact();
    ~Contact();
};

    void Contact::set_first_name(std::string a){first_name=a;}
    void Contact::set_last_name(std::string a){last_name=a;}
    void Contact::set_nickname(std::string a){nickname=a;}
    void Contact::set_phone_number(std::string a){phone_number=a;}
    void Contact::set_darkest_secret(std::string a){darkest_secret=a;}
    
    std::string Contact::get_first_name(void){return first_name;}
    std::string Contact::get_last_name(void){return last_name;}
    std::string Contact::get_nickname(void){return nickname;}
    std::string Contact::get_phone_number(void){return phone_number;}
    std::string Contact::get_darkest_secret(void){return darkest_secret;}

Contact::Contact()
    {
        
    }

Contact::~Contact()
    {
    }

int add(Contact *a)
{
    std::string str;
        std::cout << "first_name : ";
        std::getline(std::cin, str);
        if (! str[0])
            return ( std::cout << "you should fill all "<< std::endl,1);
        else
            a->set_first_name(str);
                
        std::cout << "last_name : ";
        std::getline(std::cin, str);
        if (! str[0])
            return (std::cout << "you should fill all "<< std::endl,1);
        else
            a->set_last_name(str);
        
        std::cout << "nickname : ";
        std::getline(std::cin, str);
        if (! str[0])
            return ( std::cout << "you should fill all "<< std::endl,1);
        else
            a->set_nickname(str);
            
        std::cout << "phone_number : ";
        std::getline(std::cin, str);
        if (! str[0])
            return ( std::cout << "you should fill all "<< std::endl,1);
        else
            a->set_phone_number(str);
        
        std::cout << "darkest_secret : ";
        std::getline(std::cin, str);
        if (! str[0])
            return ( std::cout << "you should fill all "<< std::endl,1);
        else
            a->set_darkest_secret(str);
        
    return (std::cout << "your Contact has been created succefly "<< std::endl,0); 
}
  
int main()
{
    Contact a1;
    std::string input;
    int a = 1;
    while (a)
    {
        std::cout << "witch commend you want ? "<< std::endl;
        getline(std::cin,input);
        if (input == "ADD")
            {
                add(&a1);
            }
        else if (input == "EXIT")
            {
                a=0;
            std::cout << "goood bye "<< std::endl; 
            }
    }
}