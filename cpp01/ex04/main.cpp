/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:26 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/23 15:31:59 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::fstream src,dest;
        std::string str,tmp;
        src.open(argv[1]);
        if (!src.is_open())
        {
            std::cout << "\033[31mcheck filename!\033[0m"<<std::endl;
            return(1);
        }
        getline(src,str,'\0');
        tmp=argv[1];
         tmp += ".replace";
        dest.open(tmp,std::ios::out);
        if (!dest.is_open())
        {
            std::cout << "\033[31mfailure to open new file!\033[0m" << std::endl;
            return 1;
        }
        dest<<str ;
        dest.close();
        src.close();
            
    }
    else {
        std::cout << "we need 3 argement please !"<<std::endl;
        return 1;}
}