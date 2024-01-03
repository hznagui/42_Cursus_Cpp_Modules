/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:54:48 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/03 21:00:25 by hznagui          ###   ########.fr       */
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
    int z=0,j=0,limit=((str[0] == '-') ? (1) : (0)),m=0;
    for (unsigned long i=0; i < str.length();i++)
	{
        if (str[i]=='.')
            z++;
        if (str[i]=='-')
            j++;
        if (str[i]== 'f')
            m++;
		if ((!isdigit(str[i]) && str[i] != '-' && str[i] != '.' && str[i] != 'f' ) || m>1|| z > 1 || j > limit )
			return 0;
	}
    int ret = ((z == 1 && m == 1)? 2:((z==1) ? 3 : 1 ));
	return ret;
}
void ScalarConverter::convert(std::string obj)
{
    if (!std::strcmp(obj.c_str(),"nan") || !std::strcmp(obj.c_str(),"nanf"))
    {nanprint();
    return;}
    else if(!std::strcmp(obj.c_str(),"+inff") || !std::strcmp(obj.c_str(),"+inf"))
    {infprint('+');
    return;}
    else if(!std::strcmp(obj.c_str(),"-inff") || !std::strcmp(obj.c_str(),"-inf"))
    {infprint('-');
    return;}
    int ret = ((obj.length() > 1)? ((check(obj) == 0) ? -1 : check(obj)) : 4);
    if (ret==-1)
		{std::cout << "only decimal or char values are accepted "<<std::endl;
		return;}
    
    int a = ((obj.length() > 1) ? (atoi(obj.c_str())) : ((isdigit(obj[0])) ? (atoi(obj.c_str())) :( obj[0])) );
    std::cout << "char: " ; 
    if (a>126 || a < 32)
        std::cout << "Non displayable"<<std::endl;
        else 
            std::cout << char(a) << std::endl;
    std::cout << "int: " << (int)a << std::endl;
    std::cout << std::fixed;
    std::cout << "float: " << std::setprecision(1)<<(float)a << std::endl;
    std::cout << "double: " << (double)(a) << std::endl;
}
