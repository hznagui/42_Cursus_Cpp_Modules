/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:10 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 15:04:45 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request",72,45)
{
    Target = "home";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request",72,45)
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
void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if (!getSigned())
        throw NotSigned();
    else if (executor.getGrade() > getGradeToExce())
        throw GradeTooLowException();
    else 
    {
        srand(time(NULL));
        if (rand() % 2)
            std::cout << Target <<" has been robotomized"<< std::endl;
        else 
            throw RobotomyFailed();
    }
}
const char * RobotomyRequestForm::RobotomyFailed::what()const throw() {return "robotomy failed";}
