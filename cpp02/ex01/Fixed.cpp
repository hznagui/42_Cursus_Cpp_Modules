/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:53 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/07 20:02:07 by hznagui          ###   ########.fr       */
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
    float tmp=Number*256;
    number_value= roundf(tmp);
    std::cout<< "Float constructor called" <<std::endl;
}
std::ostream &operator<<(std::ostream& os,const Fixed &obj)
{
    os<< obj.toFloat();
    return os;
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits( obj.getRawBits());
}
Fixed &Fixed::operator= ( const Fixed &obj)
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
    return number_value;
}

void Fixed::setRawBits(int const raw)
{
    number_value = raw;
}
const int Fixed::fractional_bits = 8;
int Fixed::toInt( void ) const
{
    return (this->getRawBits()>>this->fractional_bits);
}
float Fixed::toFloat( void ) const
{
    return (this->getRawBits()/std::pow(2,fractional_bits));
}

