/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:10:04 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 18:05:48 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

// void test()
// {
    // system("leaks form");
// }
int main()
{
    // atexit(test);
    try 
    {
        Bureaucrat a("houdayfa",4),b("ana",150);
        Intern player;
        AForm *rrf;
        rrf=player.makeForm("shrubbery request","Bender");
        a.signForm(*rrf);
        a.executeForm(*rrf);
        delete rrf;
        
    }
    catch (std::exception &e)
    {
        std::cout << "error : "<< e.what()<<std::endl;
    }
}