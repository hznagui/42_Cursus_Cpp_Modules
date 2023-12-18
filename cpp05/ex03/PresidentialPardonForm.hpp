/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:08 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:24:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
class PresidentialPardonForm : public Form
{
    std::string Target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm &operator=(const PresidentialPardonForm&);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};

#endif