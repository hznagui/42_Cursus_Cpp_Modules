/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:10 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/17 14:40:27 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form",72,45)
{
    Target = "home";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form",72,45)
{
    Target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
    Target = obj.Target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    Target = obj.Target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm() 
{
}
void execute(Bureaucrat const & executor)
{
    if (!getSigned())
        throw NotSigned();
    else if (executor.getGrade() > getGradeToExce())
        throw GradeTooLowException();
    else 
    {
        
    }
}
const char * ShrubberyCreationForm::RobotomyFailed::what()const throw() {return "robotomy failed";}
