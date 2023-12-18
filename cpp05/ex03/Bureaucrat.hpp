/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:09:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/16 22:21:42 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
class AForm;
class Bureaucrat 
{
        const std::string Name;
        int Grade;
    public:
    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw();
    };    
    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };
        Bureaucrat();
        Bureaucrat(const std::string &, const int &);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator=(const Bureaucrat &);
        ~Bureaucrat();
        std::string getName() const ;
        int getGrade() const ;
        void increment();
        void decrement();
        void signForm(AForm &);
        void executeForm(AForm const & form);
};
    std::ostream &operator<<(std::ostream &, const Bureaucrat &);
#endif