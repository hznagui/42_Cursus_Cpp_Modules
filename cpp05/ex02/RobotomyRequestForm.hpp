/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:12 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/17 14:39:00 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
    std::string Target;
    public:
        RobotomyRequestForm();//
        RobotomyRequestForm(std::string);//
        RobotomyRequestForm(const RobotomyRequestForm &);//
        RobotomyRequestForm &operator=(const RobotomyRequestForm &);//
        ~RobotomyRequestForm();//
        void execute(Bureaucrat const & executor);
    class RobotomyFailed : public std::exception 
    {
        virtual const char* what() const throw();      
    };
};
#endif