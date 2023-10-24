/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:26 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/24 09:17:08 by hznagui          ###   ########.fr       */
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
        std::string str,tmp,ret;
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
        int i=0,j=0;
        while (str[i])
        {
            if (str[i+j]==argv[2][j])
                {
                   while((argv[2][j]==str[i+j])&& argv[2][j] && str[i+j])
                        j++;
                    if (!argv[2][j])
                    {
                        ret+=argv[3];
                        i+=j;
                    }
                    else
                    {
                        ret+=str[i];
                        i++;
                    }
                    j=0;
                }
            else{ 
                ret+=str[i];
                i++;
                }
        }
        dest<<ret ;
        dest.close();
        src.close();
        
    }
    else
    {
        std::cout << "we need 3 argement please !"<<std::endl;
        return 1;
    }
}
// ./Sed_is_for_losers test0 "" houdayfa
// ./Sed_is_for_losers test houdayfa tamago
// ./Sed_is_for_losers test "" houdayfa
// ./Sed_is_for_losers test houdayfa ""