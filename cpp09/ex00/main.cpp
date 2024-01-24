/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:27:28 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/24 12:00:23 by hznagui          ###   ########.fr       */
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
            std::cout << "\033[31m Error : bad input => "<< str<<"\033[0m" << std::endl; 
}
int number(std::string a)
{
    std::string tmp;
    for (size_t i=0;i<a.length();i++)
    {
        if (a[i] != '-')
            tmp+=a[i];   
    }
    return std::atoi(tmp.c_str());
}

int main (int argc,char **argv)
{
    if (argc == 2)
    {
        std::string tmp,tmp1;
        std::map<int,BitcoinExchange> data;
        std::fstream file (argv[1]);
        std::fstream database("data.csv");
        if (!database.is_open())
            error(3);
        std::getline(database,tmp,'\n');
        while (std::getline(database,tmp1,','))
        {
            std::getline(database,tmp,'\n');
            data[number(tmp1)] = BitcoinExchange(tmp1,std::atof(tmp.c_str()));
        }
        std::getline(file,tmp1,'\n');
        if (std::strcmp(tmp1.c_str(),"date | value"))
            parsing_error(4);
        while (std::getline(file,tmp1,'\n'))
        {
            if (tmp1.length() < 14 || !std::isdigit(tmp1[0]) || !std::isdigit(tmp1[1]) || !std::isdigit(tmp1[2]) || !std::isdigit(tmp1[3]) ||tmp1[4] != '-' || !std::isdigit(tmp1[5]) || !std::isdigit(tmp1[6]) || tmp1[7] != '-' || !std::isdigit(tmp1[8]) || !std::isdigit(tmp1[9]) || tmp1[10]!=' ' || tmp1[11] != '|' || tmp1[12] != ' ')
                parsing_error(5,tmp1);
                
            std::cout << tmp1 << std::endl;
            
                
            // for(size_t i = 0;i < tmp1.length();i++)
            // {
            //     if (tmp1[i] != '-' && tmp1[i] != '|' && tmp1[i] != )
            // }
            
        }
        // std::cout << data[std::atoi(argv[1])].getexchange_rate() << std::endl;
    }
    else
        error(1);
}