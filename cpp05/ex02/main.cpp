/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:10:04 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/16 23:03:00 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try 
    {
        Bureaucrat a("houdayfa",4),b("ana",150);
        ShrubberyCreationForm t("retire");
        a.signForm(t);
        a.executeForm(t);
    }
    catch (std::exception &e)
    {
        std::cout << "error : "<< e.what()<<std::endl;
    }
}