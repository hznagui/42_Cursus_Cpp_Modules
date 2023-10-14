/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:52:14 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/14 15:34:26 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    int i = 1;
    int z = 0;
    while (argv[i])
        {
            z = 0;
            while (argv[i][z])
            {
                if (argv[i][z] >= 97 && argv[i][z] <= 122){
                char s = argv[i][z]-32;   
                std::cout << s;
                }
                else
                    std::cout << argv[i][z];
                z++;
            }
        std::cout << " " ;
            i++;
        }
        std::cout << std::endl;
}