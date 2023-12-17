/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houdayfa <houdayfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:08 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/17 22:34:57 by houdayfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
class PresidentialPardonForm : public AForm
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