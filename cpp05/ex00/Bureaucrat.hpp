/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:09:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/14 11:48:19 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat 
{
    const std::string Name;
    int Grade;
    
    public:
    Bureaucrat();//
    Bureaucrat(const std::string &, const int &);//
    Bureaucrat(const Bureaucrat &);//
    Bureaucrat &operator=(const Bureaucrat &);//
    ~Bureaucrat();//
    std::string getName();//
    int getGrade();//
    void increment();
    void decrement();
};
#endif