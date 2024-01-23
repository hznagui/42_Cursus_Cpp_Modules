/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:27:25 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/23 12:13:54 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <string>
#include <fstream>
class BitcoinExchange
{
    std::string date;
    float exchange_rate;
    public:
    BitcoinExchange(std::string , float);//
    BitcoinExchange();//
    ~BitcoinExchange();//
    BitcoinExchange(const BitcoinExchange &);//
    BitcoinExchange &operator=(const BitcoinExchange &);//
    std::string getDate();
    float getexchange_rate();
};