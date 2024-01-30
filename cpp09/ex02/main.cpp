/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:33:38 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/30 11:40:10 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int parsing (std::string str)
{
    for(size_t a = 0 ; a < str.length() ; a++)
    {
        if (!isdigit(str[a]) || str[a] != ' ')
            return 1;
    }
    std::stringstream cstr(str);
    std::string tmp;
    while (!cstr.eof())
    {
        std::getline(cstr,tmp,' ');
        if (tmp.length()>10)
            return 1;
    }
    return 0;
}

int main(int argc,char **argv)
{
    if (argc <= 1)
    {
        std::cout << "bruh really ??"<<std::endl;
        return 1;
    }
    std::string main;
    for (int i=1;i<argc;i++)
    {
        main += argv[i];
        main += ' ';
    }
    if (parsing(main))
    {
        std::cout << "check ur argement pleaseeeee !!!"<<std::endl;
        return 1;
    }
    
}