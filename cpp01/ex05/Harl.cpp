/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:13:31 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/24 11:45:20 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}
void Harl::complain(std::string level)
{
    if (level == "DEBUG")
        (this->*taible[0])();
    else if (level == "INFO")
        (this->*taible[1])();
    else if (level == "WARNING")
        (this->*taible[2])();
    else if (level == "ERROR")
        (this->*taible[3])();
    else 
        std::cout << "check ur argement"<<std::endl;
}
Harl::Harl()
{
        taible[0]= &Harl::debug;
        taible[1]= &Harl::info;
        taible[2]= &Harl::warning;
        taible[3]= &Harl::error;
    
}