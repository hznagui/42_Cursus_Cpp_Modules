/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:09:56 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/13 18:26:22 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    Name = "khalid";
    Grade = 17;
}
Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
{
    Name=name;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    
}