/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:35:15 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/09 18:19:55 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "Array.hpp"
int main()
{
    char tab []= "salam"; 
    Array<char> a(6);
    for (int i =0;i<6;i++)
        a[i]=tab[i];
        try{
            
    std::cout << a[5] << std::endl;
    std::cout << tab[5] << std::endl;
        }
        catch (std::exception h)
        {
            std::cout << h.what()<<std::endl;

        }
}