/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:30:56 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/25 18:37:14 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int parsing (std::string str)
{
    for(size_t a = 0 ; a < str.length() ; a++)
    {
        if (!isdigit(str[a]) && str[a] != ' '  && str[a] != '+' && str[a] != '-' && str[a] != '*' && str[a] != '/')
            return 1;
    }
    std::stringstream cstr(str);
    std::string tmp;
    while (!cstr.eof())
    {
        std::getline(cstr,tmp,' ');
        if (tmp.length()>1)
            return 1;
    }
    return 0;
}
int calcul(std::string main)
{
    std::stack<int> stack;
    std::stringstream cstr(main);
    std::string tmp;
    int a=0,b=0;
    while (!cstr.eof())
    {
        std::getline(cstr,tmp,' ');
        if ((!std::strcmp(tmp.c_str(),"-") || !std::strcmp(tmp.c_str(),"+") || !std::strcmp(tmp.c_str(),"/") || !std::strcmp(tmp.c_str(),"*")) && stack.size() <= 1)
            return 1;
        else if (std::isdigit(tmp[0]))
            stack.push(std::atoi(tmp.c_str()));
        else if (!std::strcmp(tmp.c_str(),"-") || !std::strcmp(tmp.c_str(),"+") || !std::strcmp(tmp.c_str(),"/") || !std::strcmp(tmp.c_str(),"*"))
        {
            b = stack.top();
            stack.pop();
            a = stack.top();
            stack.pop();
            if (!std::strcmp(tmp.c_str(),"-"))
                stack.push(a - b);
            else if (!std::strcmp(tmp.c_str(),"+"))
                stack.push(a + b);
            else if (!std::strcmp(tmp.c_str(),"/"))
            {
                if (b==0)
                    return 1;
                stack.push(a / b);  
            }
            else if (!std::strcmp(tmp.c_str(),"*"))
                stack.push(a * b);
        }
    }
    std::cout << "Result => "<< stack.top()<<std::endl;
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
    if (parsing(main) || calcul(main) )
    {
        std::cout << "check ur argement pleaseeeee !!!"<<std::endl;
        return 1;
    }
}