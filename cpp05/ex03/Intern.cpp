/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:48:11 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:04:11 by hznagui          ###   ########.fr       */
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
    (i < 3) ? (1) : (throw DoesntExist(),0);
    AForm *taible[3]={new PresidentialPardonForm(target),new RobotomyRequestForm(target),new ShrubberyCreationForm(target)};
    std::cout <<"Intern creates " << taible[i]->getName()<<std::endl;
    for (int z=0;z<3;z++)
        (z == i) ? (1) : (delete taible[z],0);
    return taible[i]; 
}
const char * Intern::DoesntExist::what()const throw() {return "Inter can't create Form  because parameter doesn’t exist";}
