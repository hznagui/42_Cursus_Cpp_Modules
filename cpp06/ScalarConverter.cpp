/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:54:48 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/03 13:27:50 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

void nanprint()
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "nanf" << std::endl;
    std::cout << "double: " << "nan" << std::endl;
}
void infprint(char a)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " <<a<< "inf" << std::endl;
    std::cout << "float: " <<a<< "inff" << std::endl;
    std::cout << "double: " <<a<< "inf" << std::endl;
}
int check(std::string &str)
{
	if (str[1] == '-')
		
    for (int i=1; i < str.length();i++)
	{
		if ((!std::isdigit(str[i])&&!strcmp(str[i],'-')&&!strcmp(str[i],'.'))||z > 1||)
			return 1;
	}
	return 0;
}
void ScalarConverter::convert(std::string obj)
{
    if (strcmp(obj.c_str(),"nan") || strcmp(obj.c_str(),"nanf"))
    {nanprint();
    return;}
    else if(strcmp(obj.c_str(),"+inff") || strcmp(obj.c_str(),"+inf"))
    {infprint('+');
    return;}
    else if(strcmp(obj.c_str(),"-inff") || strcmp(obj.c_str(),"-inf"))
    {infprint('-');
    return;}
    if (obj.length() > 1 && check(obj))
		{std::cout << "only decimal or char values are accepted "<<std::endl;
		return;}
	
    std::cout << "char: " << obj<< std::endl;
    std::cout << "int: " <<obj<< std::endl;
    std::cout << "float: " <<a<< std::endl;
    std::cout << "double: " <<a<< std::endl;
}
