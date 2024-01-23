/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:27:28 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/23 11:52:44 by hznagui          ###   ########.fr       */
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
int main (int argc,char **argv)
{
    if (argc == 2)
    {
        std::string tmp,tmp1;
        std::map<std::string,BitcoinExchage>
        std::fstream file (argv[1]),database("data.csv");
        // if (!file.is_open())
        //     error(2);
        if (!database.is_open())
            error(3);
        
        std::getline(database,tmp,'\n');
        
        while (std::getline(database,tmp1,','))
        {
        std::getline(database,tmp,'\n');
        std::cout << tmp1<<std::endl;
        std::cout << tmp<<std::endl;
        }
    }
    else
        error(1);
}