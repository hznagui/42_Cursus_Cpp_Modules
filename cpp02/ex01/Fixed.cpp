/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:53 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/04 11:17:43 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    number_value = 0;
}
Fixed::Fixed(const int Number)
{
    number_value = (Number<<fractional_bits);
    std::cout<< "Int constructor called"<<std::endl;
}
Fixed::Fixed(const float Number)
{
    number_value= roundf(Number<<fractional_bits);
    std::cout<< "Float constructor called" <<std::endl;
}
Fixed::Fixed(Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits( obj.getRawBits());
}
Fixed &Fixed::operator= ( Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits( obj.getRawBits());
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return number_value;
}

void Fixed::setRawBits(int const raw)
{
    number_value = raw;
}
const int Fixed::fractional_bits = 8;
int Fixed::toInt( void ) const
{
    return (getRawBits()>>fractional_bits);
}
float toFloat( void ) const
{
    return (getRawBits()>>fractional_bits);
}

