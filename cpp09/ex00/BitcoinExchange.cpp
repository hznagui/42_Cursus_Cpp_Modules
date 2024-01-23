/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:27:22 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/23 12:19:58 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string BitcoinExchange::getDate(){return date;}
float BitcoinExchange::getexchange_rate(){return exchange_rate;}
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & obj)
{
    date=obj.date; 
    exchange_rate=obj.exchange_rate;
    return *this;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & obj)
{
    date=obj.date; 
    exchange_rate=obj.exchange_rate;
}
BitcoinExchange::BitcoinExchange(std::string Date, float rate ) : date(Date) ,exchange_rate(rate){}

