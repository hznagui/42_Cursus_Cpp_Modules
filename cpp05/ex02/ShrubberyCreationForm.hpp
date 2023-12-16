/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:17 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/16 17:21:22 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
class ShrubberyRequestForm : public AForm
{
    std::string target;
    public:
        ShrubberyRequestForm();
        ShrubberyRequestForm(std::string);
        ShrubberyRequestForm(const ShrubberyRequestForm &);
        ShrubberyRequestForm &operator=(const ShrubberyRequestForm&);
        ~ShrubberyRequestForm();
        void execute(Bureaucrat const & executor);
};
#endif