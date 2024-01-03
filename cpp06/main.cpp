/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:44:16 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/02 15:19:25 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(char **argv,int argc)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "check argement"<<std::endl;
}