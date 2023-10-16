/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:00:32 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/16 14:44:44 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string>
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
    first_name="          ";
    last_name="          ";
    nickname="          ";
    phone_number="          ";
    darkest_secret="          ";
    }

Contact::~Contact()
    {
        
    }
class PhoneBook
{
    Contact table[8];
    public:
    Contact *get_table(int i);
};
Contact*   PhoneBook:: get_table(int i){return &table[i];}

int ft_error()
{
    if(!std::cin)
    {
        std::cout << "\033[31mfailure ;)\033[0m\n";
        return 1;
    }
    return 0;
}
int ft_strlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
int add(Contact *a)
{
    std::string str;
        std::cout << "first_name : ";
        std::getline(std::cin, str);
        if (ft_error())
            return 1;
        if (! str[0])
            return ( std::cout << "\033[31merror: empty information is forbidden\033[0m"<< std::endl,2);
        else
            a->set_first_name(str);
                
        std::cout << "last_name : ";
        std::getline(std::cin, str);
        if (ft_error())
            return 1;
        
        if (! str[0])
            return (std::cout << "\033[31merror: empty information is forbidden\033[0m"<< std::endl,2);
        else
            a->set_last_name(str);
        
        std::cout << "nickname : ";
        std::getline(std::cin, str);
        if (ft_error())
            return 1;
        
        if (! str[0])
            return ( std::cout << "\033[31merror: empty information is forbidden\033[0m"<< std::endl,2);
        else
            a->set_nickname(str);
            
        std::cout << "phone_number : ";
        std::getline(std::cin, str);
        if (ft_error())
            return 1;
        if (! str[0])
            return ( std::cout << "\033[31merror: empty information is forbidden\033[0m"<< std::endl,2);
        else
            a->set_phone_number(str);
        
        std::cout << "darkest_secret : ";
        std::getline(std::cin, str);
        if (ft_error())
            return 1;
        if (! str[0])
            return ( std::cout << "\033[31merror: empty information is forbidden\033[0m"<< std::endl,2);
        else
            a->set_darkest_secret(str);
        
    return (std::cout << "\033[32myour Contact has been created succefly \033[0m"<< std::endl,0); 
}

std::string check(std::string str)
{
    std::string ret="          ";
    
    if (ft_strlen(str) > 11)
    {
        str.erase(9);
        str+=".";
    }
    else if (ft_strlen(str) == 11)
        return str;
    else if (ft_strlen(str) < 11)
    {
        while (ft_strlen(str)<10)
            str =" "+str;
    }
    return str;
}
int search(PhoneBook *i)
{
    std::string y;
    std::cout<<"     index"<< "|"<<"first name"<<"|"<<" last name"<<"|"<<"  nickname"<<std::endl;
    std::cout<<"         1"<< "|"<<check(i->get_table(0)->get_first_name())<<"|"<<check(i->get_table(0)->get_last_name())<<"|"<<check(i->get_table(0)->get_nickname())<<std::endl;
    std::cout<<"         2"<< "|"<<check(i->get_table(1)->get_first_name())<<"|"<<check(i->get_table(1)->get_last_name())<<"|"<<check(i->get_table(1)->get_nickname())<<std::endl;
    std::cout<<"         3"<< "|"<<check(i->get_table(2)->get_first_name())<<"|"<<check(i->get_table(2)->get_last_name())<<"|"<<check(i->get_table(2)->get_nickname())<<std::endl;
    std::cout<<"         4"<< "|"<<check(i->get_table(3)->get_first_name())<<"|"<<check(i->get_table(3)->get_last_name())<<"|"<<check(i->get_table(3)->get_nickname())<<std::endl;
    std::cout<<"         5"<< "|"<<check(i->get_table(4)->get_first_name())<<"|"<<check(i->get_table(4)->get_last_name())<<"|"<<check(i->get_table(4)->get_nickname())<<std::endl;
    std::cout<<"         6"<< "|"<<check(i->get_table(5)->get_first_name())<<"|"<<check(i->get_table(5)->get_last_name())<<"|"<<check(i->get_table(5)->get_nickname())<<std::endl;
    std::cout<<"         7"<< "|"<<check(i->get_table(6)->get_first_name())<<"|"<<check(i->get_table(6)->get_last_name())<<"|"<<check(i->get_table(6)->get_nickname())<<std::endl;
    std::cout<<"         8"<< "|"<<check(i->get_table(7)->get_first_name())<<"|"<<check(i->get_table(7)->get_last_name())<<"|"<<check(i->get_table(7)->get_nickname())<<std::endl;
    std::cout << "chose one of them using index ? ";
    getline(std::cin,y);
    if (ft_error())
        return 1;
    if (y == "1")
            std::cout<<" first_name: "<<i->get_table(0)->get_first_name()<<"\n last name: "<<i->get_table(0)->get_last_name()<<"\n nickname : "<<i->get_table(0)->get_nickname()<<"\n phone number: "<<i->get_table(0)->get_phone_number() <<"\n darkest secret: "<<i->get_table(0)->get_darkest_secret() <<std::endl;
    else if (y == "2")
            std::cout<<" first_name: "<<i->get_table(1)->get_first_name()<<"\n last name: "<<i->get_table(1)->get_last_name()<<"\n nickname : "<<i->get_table(1)->get_nickname()<<"\n phone number: "<<i->get_table(1)->get_phone_number() <<"\n darkest secret: "<<i->get_table(1)->get_darkest_secret() <<std::endl;
    else if (y == "3")
            std::cout<<" first_name: "<<i->get_table(2)->get_first_name()<<"\n last name: "<<i->get_table(2)->get_last_name()<<"\n nickname : "<<i->get_table(2)->get_nickname()<<"\n phone number: "<<i->get_table(2)->get_phone_number() <<"\n darkest secret: "<<i->get_table(2)->get_darkest_secret() <<std::endl;
    else if (y == "4")
            std::cout<<" first_name: "<<i->get_table(3)->get_first_name()<<"\n last name: "<<i->get_table(3)->get_last_name()<<"\n nickname : "<<i->get_table(3)->get_nickname()<<"\n phone number: "<<i->get_table(3)->get_phone_number() <<"\n darkest secret: "<<i->get_table(3)->get_darkest_secret() <<std::endl;
    else if (y == "5")
            std::cout<<" first_name: "<<i->get_table(4)->get_first_name()<<"\n last name: "<<i->get_table(4)->get_last_name()<<"\n nickname : "<<i->get_table(4)->get_nickname()<<"\n phone number: "<<i->get_table(4)->get_phone_number() <<"\n darkest secret: "<<i->get_table(4)->get_darkest_secret() <<std::endl;
    else if (y == "6")
            std::cout<<" first_name: "<<i->get_table(5)->get_first_name()<<"\n last name: "<<i->get_table(5)->get_last_name()<<"\n nickname : "<<i->get_table(5)->get_nickname()<<"\n phone number: "<<i->get_table(5)->get_phone_number() <<"\n darkest secret: "<<i->get_table(5)->get_darkest_secret() <<std::endl;
    else if (y == "7")
            std::cout<<" first_name: "<<i->get_table(6)->get_first_name()<<"\n last name: "<<i->get_table(6)->get_last_name()<<"\n nickname : "<<i->get_table(6)->get_nickname()<<"\n phone number: "<<i->get_table(6)->get_phone_number() <<"\n darkest secret: "<<i->get_table(6)->get_darkest_secret() <<std::endl;
    else if (y == "8")
            std::cout<<" first_name: "<<i->get_table(7)->get_first_name()<<"\n last name: "<<i->get_table(7)->get_last_name()<<"\n nickname : "<<i->get_table(7)->get_nickname()<<"\n phone number: "<<i->get_table(7)->get_phone_number() <<"\n darkest secret: "<<i->get_table(7)->get_darkest_secret() <<std::endl;
    else
        std::cout << "\033[31merror: need some index\033[0m"<<std::endl;
    return 0;
}
int main()
{
    PhoneBook i;
    int tmp = 0,nbr = 0;
    std::string input;
    int a = 1;
    while (a)
    {
        std::cout << "\033[35mPhoneBook MENU:\nADD\nSEARCH\nEXIT\033[0m"<< std::endl  ;
        getline(std::cin,input);
        if (ft_error())
            return 1;
        if (input == "ADD")
        {
            tmp = add(i.get_table(nbr));
            if (tmp == 1)
                return 1;
            if (!tmp && nbr == 7)
                nbr = 0;
            else if (!tmp)
                nbr++;
            else
            {
                    i.get_table(nbr)->set_first_name("          ");
                    i.get_table(nbr)->set_last_name("          ");
                    i.get_table(nbr)->set_nickname("          ");
                    i.get_table(nbr)->set_phone_number("          ");
                    i.get_table(nbr)->set_darkest_secret("          ");
            }
        }
        else if (input == "SEARCH")
        {
            if (search(&i))
                return 1;
        }
        else if (input == "EXIT")
            {
                a = 0;
                std::cout << "\033[1m\033[33mgoood bye "<< std::endl; 
            }
        else 
                std::cout << "try one of those "<< std::endl; 
    }
}