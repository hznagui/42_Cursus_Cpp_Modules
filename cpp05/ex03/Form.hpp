/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:15:18 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:23:51 by hznagui          ###   ########.fr       */
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
    virtual ~Form();//
    std::string getName() const ;//
    bool getSigned()const;//
    int getGradeToExce()const;//
    int getGradeToSign()const;//
    void beSigned(Bureaucrat &);//
    virtual  void execute(Bureaucrat const & executor) const = 0;//
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
    class NotSigned : public std::exception
    {
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &, Form &);

#endif