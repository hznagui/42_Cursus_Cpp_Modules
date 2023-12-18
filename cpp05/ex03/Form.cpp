/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:15:15 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:30:20 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("retirement") ,grade_exce(90), grade_sign(80)
{
    sign = false;
}
Form::Form(std::string name,int signe,int exce) : Name(name) ,grade_exce(exce) , grade_sign(signe)
{
    sign = false;
    
    if (exce > 150 || grade_sign > 150)
        throw GradeTooLowException();
    else if (exce < 1 || grade_sign < 1)
        throw GradeTooHighException();
}

Form::Form (const Form &obj) : Name(obj.Name) ,grade_exce(obj.grade_exce) , grade_sign(obj.grade_sign){sign = false;}

Form &Form::operator=(const Form &obj)
{
    sign=obj.sign;
    return *this;
}
Form::~Form(){}

std::string Form::getName()const {return Name;}

bool Form::getSigned()const{return sign;}

int Form::getGradeToExce()const {return grade_exce;}
int Form::getGradeToSign()const {return grade_sign;}

void Form::beSigned(Bureaucrat &obj)
{
    if (sign)
        throw AlreadySigned();
    else if (obj.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    else 
        sign = true;
}
std::ostream &operator<<(std::ostream &os, Form &obj)
{
    os << obj.getName() << ", Form grade to execute is "<<obj.getGradeToExce()<<" ,grade to sign is "<< obj.getGradeToSign();
    if (obj.getSigned())
        os << " and it signed"; 
    else
        os << " and it not signed yet";
    return os;
}
const char * Form::GradeTooHighException::what()const throw() {return "Grade Too High Exception";}
const char * Form::GradeTooLowException::what()const throw() {return "Grade Too Low Exception";}
const char * Form::AlreadySigned::what()const throw() {return "Form already signed";}
const char * Form::NotSigned::what()const throw() {return "Form not signed";}