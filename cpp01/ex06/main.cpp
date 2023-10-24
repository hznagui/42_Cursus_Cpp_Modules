/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:13:25 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/24 18:47:20 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc,char **argv)
{
    if (argc == 2)
    {
        Harl a;
        a.complain(argv[1]);
    }
    else
    {
        std::cout << "check ur argement"<<std::endl;
    }
}