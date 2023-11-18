/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:49:02 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/18 11:01:38 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i=0;i<100;i++)
        ideas[i]="salam";
    std::cout<<"default constructor Brain called"<<std::endl;
}
Brain::Brain(const Brain &obj)
{
    for (int i=0;i<100;i++)
        ideas[i]=obj.ideas[i];
    std::cout<<"copy constructor Brain called"<<std::endl;
}
Brain::~Brain()
{
    std::cout<<"destructor Brain called"<<std::endl;
}
Brain &Brain::operator=(const Brain &obj)
{
    for (int i=0;i<100;i++)
        ideas[i]=obj.ideas[i];

    std::cout<<"copy assignement operator Brain called"<<std::endl;
}