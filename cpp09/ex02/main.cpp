/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:33:38 by hznagui           #+#    #+#             */
/*   Updated: 2024/02/01 16:11:18 by hznagui          ###   ########.fr       */
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
    int odd = -99;
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
    // starting sorting vector 
    if (vect.size() % 2)
    {
        odd = vect[vect.size()-1];
        vect.pop_back();
    }
    // std::cout << odd << std::endl;
    //now fill vector with peers
    for (unsigned long i = 0; i < vect.size() ; i+=2)
    {peer.push_back(std::make_pair(vect[i],vect[i+1]));}
        for (unsigned long i = 0; i < peer.size() ; i++)
    {
    std::cout<<"beffor "<<peer[i].first <<"==="<<peer[i].second<<std::endl;
    }
    //now sort peers
    for (unsigned long i = 0; i < peer.size() ; i++)
    {
        if (peer[i].first<peer[i].second)
        {std::swap(peer[i].first,peer[i].second);}
        }
    //now sorting the first ones 
    std::sort(peer.begin(),peer.end());
    // now poshing the first one 
    for (unsigned long i = 0; i < peer.size() ; i++)
    {
        std::cout<<"after "<<peer[i].first <<"==="<<peer[i].second<<std::endl;
    }
    jacob_number(jacob_sequence,peer.size());
    vect.clear();
    //starting to fill or main vector 
    vector.push_back(peer[0].second);
    for (unsigned long i = 0; i < peer.size() ; i++)
    {vector.push_back(peer[i].first);}
    
    
    
    return 0;
}