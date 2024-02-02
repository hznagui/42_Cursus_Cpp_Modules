/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:27:28 by hznagui           #+#    #+#             */
/*   Updated: 2024/02/02 09:14:05 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void error(int d)
{
    if (d == 1)
        std::cout << "\033[31mError: could not open file.\033[0m" <<std::endl;
    else if (d == 2)
                std::cout << "\033[31mError: check name of file.\033[0m" << std::endl;
    else if (d == 3)
            std::cout << "\033[31mdon't try to touch my database !!!!\033[0m" << std::endl;
    std::exit(1);
}
void parsing_error (int d ,std::string str = "test")
{
    if (d == 4)
        std::cout << "\033[31mError: first line should be 'date | value'.\033[0m" <<std::endl; 
    else if (d == 5)
            std::cout << "\033[31mError : bad input => "<< str<<"\033[0m" << std::endl;
    else if (d == 6)
            std::cout << "\033[31mError : check date !\033[0m" << std::endl;
    else if (d == 7)
            std::cout << "\033[31mError : check value !\033[0m" << std::endl;
            else if (d==8)
            std::cout << "\033[31mError : too large a number.\033[0m" << std::endl; 
}
int date(std::string a)
{
    std::string tmp;
    for (size_t i=0;i<a.length();i++)
    {
        if (a[i] != '-')
            tmp+=a[i];   
    }
    return std::atoi(tmp.c_str());
}
int check_date(std::string str)
{
    std::string year = str.substr(0,4), month=str.substr(5,2) ,day=str.substr(8,2);
    if (std::atoi(year.c_str()) < 2009 || std::atoi(month.c_str()) > 12 || std::atoi(day.c_str()) > 31 || std::atoi(month.c_str()) == 0 || std::atoi(day.c_str()) == 0 || (std::atoi(year.c_str()) == 2009 && std::atoi(month.c_str()) == 1 && std::atoi(day.c_str()) == 1))
        return (parsing_error(6),1) ;
    else if (std::atoi(month.c_str())== 1 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;
    else if ((std::atoi(year.c_str())%4 != 0 && std::atoi(month.c_str())== 2 && std::atoi(day.c_str()) > 28 ) || (std::atoi(month.c_str())== 2 && std::atoi(day.c_str()) > 29) )
        return (parsing_error(6),1);
    else if (std::atoi(month.c_str())== 3 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;
    else if (std::atoi(month.c_str())== 4 && std::atoi(day.c_str()) > 30)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 5 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 6 && std::atoi(day.c_str()) > 30)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 7 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 8 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 9 && std::atoi(day.c_str()) > 30)
        return (parsing_error(6),1) ;
    else if (std::atoi(month.c_str())== 10 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 11 && std::atoi(day.c_str()) > 30)
        return (parsing_error(6),1) ;    
    else if (std::atoi(month.c_str())== 12 && std::atoi(day.c_str()) > 31)
        return (parsing_error(6),1) ;
    return 0;
}
int check_number(std::string str)
{
    std::string nbr = str.substr(13);
    int z=0;
    if (nbr[0]=='.')
        return (parsing_error(7),1);
    for (size_t o = 0; o< nbr.length();o++)
    {
        if (nbr[o] == '.')
        {
            if (std::isdigit(nbr[o - 1])&&(std::isdigit(nbr[o + 1])))
                z++;
            else 
                return (parsing_error(7),1);
        }
        if ((!std::isdigit(nbr[o]) && nbr[o] != '.') || z > 1)
            return (parsing_error(7),1);
    }
    if (std::atof(nbr.c_str()) > 1000 )
        return (parsing_error(8),1);
    return 0;
}
int main (int argc,char **argv)
{
    if (argc == 2)
    {
        std::string tmp,tmp1,test;
        std::map<int,BitcoinExchange> data;
        std::fstream file (argv[1]);
        std::fstream database("data.csv");
        if (!file.is_open())
            error(2);
        if (!database.is_open())
            error(3);
        std::getline(database,tmp,'\n');
        while (std::getline(database,tmp1,','))
        {
            std::getline(database,tmp,'\n');
            data[date(tmp1)] = BitcoinExchange(tmp1,std::atof(tmp.c_str()));
        }
        std::getline(file,tmp1,'\n');
        if (std::strcmp(tmp1.c_str(),"date | value"))
            parsing_error(4);
        while (std::getline(file,tmp1,'\n'))
        {
            if (tmp1.length() < 14 || !std::isdigit(tmp1[0]) || !std::isdigit(tmp1[1]) || !std::isdigit(tmp1[2]) || !std::isdigit(tmp1[3]) ||tmp1[4] != '-' || !std::isdigit(tmp1[5]) || !std::isdigit(tmp1[6]) || tmp1[7] != '-' || !std::isdigit(tmp1[8]) || !std::isdigit(tmp1[9]) || tmp1[10]!=' ' || tmp1[11] != '|' || tmp1[12] != ' ')
                parsing_error(5,tmp1);
            else if (check_date(tmp1) || check_number(tmp1)){}
            else
            {
                std::map<int , BitcoinExchange>::iterator iter = data.find(date(tmp1.substr(0,10)));
                for (int nbr = date(tmp1.substr(0,10));iter ==  data.end();nbr--)
                {iter = data.find(nbr);}
                test = tmp1.substr(13);
                std::cout << tmp1.substr(0,10)  << " => " << test << " = " <<std::fixed<< std::setprecision(2) << std::atof (test.c_str()) * iter->second.getexchange_rate() << std::endl;                
            }
        }
    }
    else
        error(1);
}