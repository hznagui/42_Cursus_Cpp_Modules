/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:54:50 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/05 10:41:07 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include<iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter &);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &);
    public:
    static void convert(std::string);
};
#endif