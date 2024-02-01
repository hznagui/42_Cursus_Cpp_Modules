/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:33:38 by hznagui           #+#    #+#             */
/*   Updated: 2024/02/01 11:30:42 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int parsing (std::string str)
{
    for(size_t a = 0 ; a < str.length() ; a++)
    {
        if (!isdigit(str[a]) && str[a] != ' ')
            return 1;
    }
    std::stringstream cstr(str);
    std::string tmp;
    while (!cstr.eof())
    {
        std::getline(cstr,tmp,' ');
        if (tmp.length()>10)
            return 1;
    }
    return 0;
}

void jacob_number(std::vector<long> &vector,int size)
{
    int j0 = 0, j1 = 1;
    for (int j = 0; j < size; ++j) {
        j = j1 + 2 * j0;
        vector.push_back(j);
        j0 = j1;
        j1 = j;}
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
    if (parsing(main))
    {
        std::cout << "check ur argement pleaseeeee !!!"<<std::endl;
        return 1;
    }
    // declaration
    std::vector<int> vect,vector;
    std::vector< std::pair<int ,int> >peer;
    std::list<int> list,li;
    std::list< std::pair<int,int> > peer1;
    std::stringstream cstr(main);
    std::vector<long>jacob_sequence;
    std::string tmp;
    //
    while (!cstr.eof())
    {
        std::getline(cstr,tmp,' ');
        if (std::isdigit(tmp[0]))
        {
            vect.push_back(std::atoi(tmp.c_str()));
            li.push_back(std::atoi(tmp.c_str()));
        }
    }
    jacob_number(jacob_sequence,vect.size());
    for (unsigned long i=0; i < jacob_sequence.size();i++)
    {
        std::cout << jacob_sequence[i]<<std::endl;
    }
    
    return 0;
}