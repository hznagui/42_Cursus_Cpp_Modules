/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:06 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:24:36 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon",25,5)
{
    Target = "home";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon",25,5)
{
    Target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
    Target = obj.Target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    Target = obj.Target;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm() 
{
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if (!getSigned())
        throw NotSigned();
    else if (executor.getGrade() > getGradeToExce())
        throw GradeTooLowException();
    else 
    {
            std::cout << Target <<" has been pardoned by Zaphod Beeblebrox."<< std::endl;
    }
}
