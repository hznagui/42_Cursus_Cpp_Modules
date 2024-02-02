/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:33:38 by hznagui           #+#    #+#             */
/*   Updated: 2024/02/02 09:03:19 by hznagui          ###   ########.fr       */
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
void sortdeque(std::deque<int> &list, std::deque<int> &li,std::vector<unsigned int>&jacob_sequence){
    std::deque< std::pair<int ,int> >peer;
    ;
    unsigned int finish;
    int boll = -99;
    
    
    if (li.size() % 2)
    {
        boll = li[li.size()-1];
        li.pop_back();
    }
    for (unsigned long i = 0; i < li.size() ; i+=2)
    {peer.push_back(std::make_pair(li[i],li[i+1]));}
    for (unsigned long i = 0; i < peer.size() ; i++)
    {
        if (peer[i].first<peer[i].second)
        {std::swap(peer[i].first,peer[i].second);}
        }
    std::sort(peer.begin(),peer.end());
    li.clear();
    list.push_back(peer[0].second);
    for (unsigned long i = 0; i < peer.size() ; i++)
    {list.push_back(peer[i].first);}
    for (unsigned long i = 0; i < peer.size() ; i++)
    {li.push_back(peer[i].second);}
    peer.clear();
    if (boll != -99)
        li.push_back(boll);
    jacob_sequence.clear();
    jacob_number(jacob_sequence,li.size());
    for (unsigned long i = 0; i < jacob_sequence.size() ; i++)
    {
        finish=jacob_sequence[i];
        for  (unsigned int start=jacob_sequence[i+1];finish<start;start--)
        {
            if ((start-1)<li.size())
            {
                std::deque<int>::iterator it = std::lower_bound(list.begin(),list.end(),li[start-1]);
                list.insert(it,li[start-1]);
            }
        }        
    }
}
    ;
void sortvector(std::vector<int> &vector,std::vector<int> &vect, std::vector<unsigned int> &jacob_sequence ){
    std::vector< std::pair<int ,int> >peer;
    unsigned int finish;
    int boll = -99;
    
    
    if (vect.size() % 2)
    {
        boll = vect[vect.size()-1];
        vect.pop_back();
    }
    for (unsigned long i = 0; i < vect.size() ; i+=2)
    {peer.push_back(std::make_pair(vect[i],vect[i+1]));}
    for (unsigned long i = 0; i < peer.size() ; i++)
    {
        if (peer[i].first<peer[i].second)
        {std::swap(peer[i].first,peer[i].second);}
        }
    std::sort(peer.begin(),peer.end());
    vect.clear();
    vector.push_back(peer[0].second);
    for (unsigned long i = 0; i < peer.size() ; i++)
    {vector.push_back(peer[i].first);}
    for (unsigned long i = 0; i < peer.size() ; i++)
    {vect.push_back(peer[i].second);}
    peer.clear();
    if (boll != -99)
        vect.push_back(boll);
    jacob_number(jacob_sequence,vect.size());
    for (unsigned long i = 0; i < jacob_sequence.size() ; i++)
    {
        finish=jacob_sequence[i];
        for  (unsigned int start=jacob_sequence[i+1];finish<start;start--)
        {
            if ((start-1)<vect.size())
            {
                std::vector<int>::iterator it = std::lower_bound(vector.begin(),vector.end(),vect[start-1]);
                vector.insert(it,vect[start-1]);
            }
        }        
    }
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
    
    std::vector<int> vect,vector,before;
    std::deque<int> list,li;
    std::stringstream cstr(main);
    std::string tmp;
    std::vector<unsigned int>jacob_sequence;
    
    while (!cstr.eof())
    {
        std::getline(cstr,tmp,' ');
        if (std::isdigit(tmp[0]))
        {
            vect.push_back(std::atoi(tmp.c_str()));
            li.push_back(std::atoi(tmp.c_str()));
        }
    }
    before.assign(vect.begin(),vect.end());
    clock_t vector_start=clock();
    sortvector(vector,vect,jacob_sequence);
    clock_t vector_end=clock();
    double vector_time = static_cast<double>(vector_end - vector_start) / CLOCKS_PER_SEC;
    clock_t deque_start=clock();
    sortdeque(list,li,jacob_sequence);
    clock_t deque_end=clock();
    double deque_time = static_cast<double>(deque_end - deque_start) / CLOCKS_PER_SEC;
    
    std::cout <<"Before: ";
    for (unsigned long i = 0; i < before.size() ; i++)
    {
        std::cout<<" "<<before[i];
    }
    std::cout << std::endl;
    std::cout <<"After: ";
    for (unsigned long i = 0; i < vector.size() ; i++)
    {
        std::cout<<" "<<vector[i];
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " <<  vector.size() << " elements with std::vector : "<<std::fixed<< std::setprecision(9)<< vector_time<<" us"<<std::endl;
    std::cout << "Time to process a range of " <<  list.size() << " elements with std::deque : "<<std::fixed<< std::setprecision(9)<< deque_time <<" us"<<std::endl;
    return 0;
}