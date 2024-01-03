/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:54:48 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/03 15:34:51 by hznagui          ###   ########.fr       */
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
    int z=0,j=0,limit=((str[1] == '-') ? (1) : (0));
    // str[str.length()]='f';
    for (int i=1; i < str.length();i++)
	{
        if (str[i]=='.')
            z++;
        if (str[i]=='-')
            j++;
		if ((!isdigit(str[i])&&!std::strcmp(str[i],'-')&&!std::strcmp(str[i],'.')) || z > 1 || j > limit )
			return 1;
	}
	return 0;
}
void ScalarConverter::convert(std::string obj)
{
    if (std::strcmp(obj.c_str(),"nan") || std::strcmp(obj.c_str(),"nanf"))
    {nanprint();
    return;}
    else if(std::strcmp(obj.c_str(),"+inff") || std::strcmp(obj.c_str(),"+inf"))
    {infprint('+');
    return;}
    else if(std::strcmp(obj.c_str(),"-inff") || std::strcmp(obj.c_str(),"-inf"))
    {infprint('-');
    return;}
    if (obj.length() > 1 && check(obj))
		{std::cout << "only decimal or char values are accepted "<<std::endl;
		return;}
    int a = ((obj.length() > 1) ? (atoi(obj.c_str())) : (obj[1]) );
    std::cout << "char: " << (char)a << std::endl;
    std::cout << "int: " << (int)a << std::endl;
    std::cout << "float: " << (float)a << std::endl;
    std::cout << "double: " << (double)a << std::endl;
}
