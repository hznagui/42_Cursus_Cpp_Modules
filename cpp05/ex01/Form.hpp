/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:15:18 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/15 17:31:49 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form 
{
    const std::string Name;
    bool sign;
    const int grade_exce , grade_sign;
public:
    Form();//
    Form(std::string,int sign, int exce);//
    Form(const Form &);//
    Form &operator=(const Form &);//
    ~Form();//
    std::string getName();//
    bool getSigned();//
    int getGradeToExce();//
    int getGradeToSign();//
    void beSigned(Bureaucrat &);//
    class GradeTooHighException : public std::exception//
    {
        virtual const char* what() const throw();
    };    
    class GradeTooLowException : public std::exception//
    {
        virtual const char* what() const throw();
    };
    class AlreadySigned : public std::exception
    {
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &, Form &);

#endif