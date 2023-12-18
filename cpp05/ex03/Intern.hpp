/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:48:13 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:24:08 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
    Intern();
    ~Intern();
    Intern(const Intern &);
    Intern &operator=(const Intern &);
    Form *makeForm(std::string form  , std::string target);
    class DoesntExist : public std::exception
    {
        virtual const char* what() const throw();
    };
};

#endif