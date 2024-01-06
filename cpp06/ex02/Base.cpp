/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:54:26 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/06 11:20:44 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base *generate()
{
    srand( time(NULL) );
        Base *p;
    try {
        if (rand() % 3 == 0)
            p = new A;
        else if (rand() % 3 == 1)
            p = new B;
        else if (rand() % 3 == 2)
            p = new C;
    }
    catch (std::exception& e) {
        cout << e.what() << endl;
    }
    return p;
}
void identify(Base* p)
{
    A *test = dynamic_cast <A *>p;
    if (!test)
    {
        B *test1 = dynamic_cast <B *>p;
        if (! test1)
            {
                C *test2 = dynamic_cast <C *>p;
                if (!test2)
                    std::cout << "error" <<std::endl;
                else 
                    std::cout << "C"<<std::endl;
            }
            else 
                std::cout << "B"<<std::endl;
    }
    else 
        std::cout << "A"<<std::endl;                 
}
void identify(Base &p)
{
    try
    {
        A &test = dynamic_cast <A &>p;
        std::cout << "A"<<std::endl;                 
    }
    catch {
        try
            {
                B &test1 = dynamic_cast <B &>p;
                std::cout << "B"<<std::endl;
            }
        catch
        {
            try 
            {
            C &test2 = dynamic_cast <C &>p;
                std::cout << "C"<<std::endl;
            }
            catch 
            {
                std::cout << "error" <<std::endl;
            }
        }        
    } 
}