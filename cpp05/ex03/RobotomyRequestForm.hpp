/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:12 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:24:59 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <time.h>
#include <cstdlib> 
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
    std::string Target;
    public:
        RobotomyRequestForm();//
        RobotomyRequestForm(std::string);//
        RobotomyRequestForm(const RobotomyRequestForm &);//
        RobotomyRequestForm &operator=(const RobotomyRequestForm &);//
        ~RobotomyRequestForm();//
        void execute(Bureaucrat const & executor) const;
    class RobotomyFailed : public std::exception 
    {
        virtual const char* what() const throw();      
    };
};
#endif