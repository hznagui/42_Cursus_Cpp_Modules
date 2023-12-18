/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:48:11 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 16:09:24 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern &obj){(void)obj;}
Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
    return *this;
}
AForm *Intern::makeForm(std::string form, std::string target)
{
    std::string str[3]={"presidential pardon","robotomy request","shrubbery request"};
    int i=0;
    while ((i<3) && (str[i] != form.c_str()))
        i++;
    AForm *taible[3]={new PresidentialPardonForm(target),new RobotomyRequestForm(target),new ShrubberyCreationForm(target)};
    return (i < 3) ? (std::cout <<"Intern creates" << *taible[i]->getName()<<std::endl,*taible[i]) : (throw DoesntExist(),0);
    std::cout <<"Intern creates" << *taible[i]->getName(); 
}
const char * Intern::DoesntExist::what()const throw() {return "Inter can't create Form  because parameter doesn’t exist";}
