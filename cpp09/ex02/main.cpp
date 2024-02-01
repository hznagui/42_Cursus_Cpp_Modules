/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:33:38 by hznagui           #+#    #+#             */
/*   Updated: 2024/02/01 16:38:48 by hznagui          ###   ########.fr       */
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

void jacob_number(std::vector<unsigned int > &vector,int size)
{
    int j0 = 0, j1 = 1;
    for (int j = 0; j <= size; j++) {
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
    unsigned int finish;
    int bool = -99;
    std::vector<int> vect,vector;
    std::vector< std::pair<int ,int> >peer;
    std::list<int> list,li;
    std::list< std::pair<int,int> > peer1;
    std::stringstream cstr(main);
    std::vector<unsigned int>jacob_sequence;
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
    vect.clear();
    vector.push_back(peer[0].second);
    for (unsigned long i = 0; i < peer.size() ; i++)
    {vector.push_back(peer[i].first);}
    //fill our tmp victor and clear the peer vector
    for (unsigned long i = 0; i < peer.size() ; i++)
    {vect.push_back(peer[i].second);}
    peer.clear();
    jacob_number(jacob_sequence,vect.size());
    for (unsigned long i = 0; i < jacob_sequence.size() ; i++)
    {
        finish=jacob_sequence[i];
                // std::cout << jacob_sequence[i] <<std::endl;
        for  (unsigned int start=jacob_sequence[i+1];finish<start;start--)
        {
            if ((start-1)<vect.size())
            {
                std::vector<int>::iterator it = std::lower_bound(vector.begin(),vector.end(),vect[start-1]);
                vector.insert(it,vect[start-1]);
            }
        }        
    }
    for (unsigned long i = 0; i < vector.size() ; i++)
    {
        std::cout<<"after "<<vector[i]<<std::endl;
    }
    //     std::cout<<" bool " << odd<<std::endl;
    
    
    
    
    return 0;
}