/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:17 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/16 22:55:23 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    std::string Target;
    public:
        ShrubberyCreationForm();//
        ShrubberyCreationForm(std::string);//
        ShrubberyCreationForm(const ShrubberyCreationForm &);//
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);//
        ~ShrubberyCreationForm();//
        void  execute(Bureaucrat const & executor) const;
    class FileProblem : public std::exception//
    {
        virtual const char* what() const throw();
    }; 
};
#endif