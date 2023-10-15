/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:00:32 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/15 17:29:46 by hznagui          ###   ########.fr       */
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
    
    set_first_name(std::string a);
    set_last_name(std::string a);
    set_nickname(std::string a);
    set_phone_number(std::string a);
    set_darkest_secret(std::string a);

    get_first_name(void);
    get_last_name(void);
    get_nickname(void);
    get_phone_number(void);
    get_darkest_secret(void);
    
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
        std::cout << "sf salat" << std::endl;
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
            
        // std::cout<< a->get_first_name() <<std::endl;
        
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