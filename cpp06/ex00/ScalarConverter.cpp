/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:54:48 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/05 17:08:56 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &obj){(void)obj;}
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
    return *this;
}

ScalarConverter::~ScalarConverter(){}


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
        if (str[i] == '.' )
            {if (isdigit( str[i+1]))
                z++;
            else 
                    return 0;}
        if (str[i]=='-')
            j++;
        if (str[i] == 'f')
            {
                if (z>0)
                    m++;
                else 
                    return 0;
            }
        
		if ((!isdigit(str[i]) && str[i] != '-' && str[i] != '.' && str[i] != 'f' ) || m>1|| z > 1 || j > limit )
			return 0;
	}
    int ret = ((z == 1 && m == 1)? 2 : ((z == 1) ? 3 : 1 ));
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
    int ret = ((obj.length() > 1)? ((check(obj) == 0) ? -1 : check(obj)) : 1);
    if (ret==-1)
		{std::cout << "only decimal or char values are accepted "<<std::endl;
		return;}
    if (ret == 1)
    {
    if (obj.length() > 19)
		{std::cout << "this will over flow "<<std::endl;
		return;}
        int a = ((obj.length() > 1) ? (atoi(obj.c_str())) : ((isdigit(obj[0])) ? (atoi(obj.c_str())) :( obj[0])) );
        std::cout << "char: " ; 
        if (a>126 || a < 32)
            std::cout << "Non displayable"<<std::endl;
            else 
                std::cout << static_cast<char>(a) << std::endl;
        std::cout << "int: " << static_cast<int> (a) << std::endl;
        std::cout << "float: "<< static_cast<float>(a) <<".0f"<< std::endl;
        std::cout << "double: " << static_cast<double>(a) <<".0"<< std::endl;
    }
    else if (ret == 2)
    {
        float a = static_cast<float>(atof(obj.c_str()));
            
        std::cout << "char: " ; 
        if (a > 126 || a < 32)
            std::cout << "Non displayable"<<std::endl;
        else 
            std::cout << static_cast<char>(a) << std::endl;
        std::cout << "int: " << static_cast<int> (a) << std::endl;
        std::cout << "float: " << a << "f"<<std::endl;
        std::cout << "double: " << static_cast<double>(a)<< std::endl;
    }
    else if (ret == 3)
    {
        double a = (atof(obj.c_str()));
        std::cout << "char: " ; 
        if (a > 126 || a < 32)
            std::cout << "Non displayable"<<std::endl;
        else 
            std::cout << static_cast<char>(a) << std::endl;
        std::cout << "int: " << static_cast<int> (a) << std::endl;
        std::cout << "float: "<< static_cast<float>(a)<< "f"<<std::endl;
        std::cout << "double: " << a << std::endl;
    }
}
