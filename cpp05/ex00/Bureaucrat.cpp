/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:09:56 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/14 17:01:09 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():Name("khalid")
{
    Grade = 17;
}
Bureaucrat::Bureaucrat(const std::string &name, const int &grade):Name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): Name(obj.Name)
{
    Grade= obj.Grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    
    Grade= obj.getGrade();
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    
}

std::string Bureaucrat::getName()const {return Name;}
int Bureaucrat::getGrade()const {return Grade;}

void Bureaucrat::increment()
{
    if (Grade == 1)
        throw GradeTooHighException();
    else
        Grade--;
}
void Bureaucrat::decrement()
{
    if (Grade == 150)
        throw GradeTooLowException();
    else
        Grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName()<<", bureaucrat grade "<< obj.getGrade();
    return os;
}

const char * Bureaucrat::GradeTooHighException::what()const throw() {return "Grade Too High Exception";}
const char * Bureaucrat::GradeTooLowException::what()const throw() {return "Grade Too Low Exception";}