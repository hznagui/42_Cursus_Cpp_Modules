/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:13:28 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/24 15:33:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string> 
class Harl
{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public:
    void complain( std::string level );
    void (Harl::*taible[4])();
    Harl();
};
#endif