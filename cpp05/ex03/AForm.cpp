/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:15:15 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/17 15:07:12 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Name("retirement") ,grade_exce(90), grade_sign(80)
{
    sign = false;
}
AForm::AForm(std::string name,int signe,int exce) : Name(name) ,grade_exce(exce) , grade_sign(signe)
{
    sign = false;
    
    if (exce > 150 || grade_sign > 150)
        throw GradeTooLowException();
    else if (exce < 1 || grade_sign < 1)
        throw GradeTooHighException();
}

AForm::AForm (const AForm &obj) : Name(obj.Name) ,grade_exce(obj.grade_exce) , grade_sign(obj.grade_sign){sign = false;}

AForm &AForm::operator=(const AForm &obj)
{
    sign=obj.sign;
    return *this;
}
AForm::~AForm(){}

std::string AForm::getName()const {return Name;}

bool AForm::getSigned()const{return sign;}

int AForm::getGradeToExce()const {return grade_exce;}
int AForm::getGradeToSign()const {return grade_sign;}

void AForm::beSigned(Bureaucrat &obj)
{
    if (sign)
        throw AlreadySigned();
    else if (obj.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    else 
        sign = true;
}
std::ostream &operator<<(std::ostream &os, AForm &obj)
{
    os << obj.getName() << ", AForm grade to execute is "<<obj.getGradeToExce()<<" ,grade to sign is "<< obj.getGradeToSign();
    if (obj.getSigned())
        os << " and it signed"; 
    else
        os << " and it not signed yet";
    return os;
} 
const char * AForm::GradeTooHighException::what()const throw() {return "Grade Too High Exception";}
const char * AForm::GradeTooLowException::what()const throw() {return "Grade Too Low Exception";}
const char * AForm::AlreadySigned::what()const throw() {return "Form already signed";}
const char * AForm::NotSigned::what()const throw() {return "Form not signed";}