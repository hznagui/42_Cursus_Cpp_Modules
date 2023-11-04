/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:53 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/04 11:09:22 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    number_value=0;
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
    number_value=raw;
}
const int Fixed::fractional_bits = 8;