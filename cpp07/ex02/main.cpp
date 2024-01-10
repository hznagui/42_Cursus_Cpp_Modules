/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:35:15 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/10 09:46:57 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "Array.hpp"

class test
{
    public:
    int z;
    test():z(7){};
};
std::ostream & operator<<( std::ostream & o, test const & obj )
{
  o << obj.z;
  return o;
}

void hhh()
{
    system("leaks Array");
}
int main()
{
    // atexit(hhh);
    char tab []= "salam";
    test tab3[7];
    
    Array<char> a(6);
    Array<test>b(7);
    for (int i =0;i<6;i++)
        b[i]=tab3[i];
    for (int i =0;i<6;i++)
        a[i]=tab[i];
        try{
            
    std::cout << a[4] << std::endl;
    a[4]='h';
    std::cout << a[4] << std::endl;
    std::cout << tab[4] << std::endl;
    std::cout << b[2] << std::endl;
    b[2].z=9;
    std::cout << b[2] << std::endl;
    std::cout << tab3[2] << std::endl;
        }
        catch (std::exception h)
        {
            std::cout << h.what()<<std::endl;

        }
}