/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:10:04 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:20:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    
    PresidentialPardonForm b,a(b);
    std::cout << b.getGradeToSign() << std::endl;
    std::cout << a.getGradeToSign() << std::endl;
    // try 
    // {
    //     Bureaucrat a("houdayfa",4),b("ana",150);
    //     ShrubberyCreationForm t("retire");
    //     RobotomyRequestForm k("habibi");
    //     PresidentialPardonForm z("hamid");
    //     a.signForm(t);
    //     a.signForm(k);
    //     a.signForm(z);
    //     a.executeForm(z);
    //     a.executeForm(t);
    //     a.executeForm(k);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << "error : "<< e.what()<<std::endl;
    // }
}