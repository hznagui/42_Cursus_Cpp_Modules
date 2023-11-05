/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:55 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/05 14:25:29 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    int number_value;
    static const int fractional_bits;
    public:
    Fixed();
    Fixed(const int Number);
    Fixed(const float Float);
    Fixed(const Fixed &obj);
    Fixed &operator= (const Fixed &obj);
    ~Fixed();
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits( int const raw );
    Fixed &operator+(const Fixed &one);
    Fixed &operator-(const Fixed &one);
    Fixed &operator*(const Fixed &one);
    Fixed &operator/(const Fixed &one);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed &operator--(int);
    static const Fixed &min(const Fixed&one ,const Fixed &two );
    static Fixed &min(Fixed &one ,Fixed &two);
    static const Fixed &max(const Fixed&one ,const Fixed &two );
    static Fixed &max(Fixed &one ,Fixed &two);
    
};
std::ostream &operator<<(std::ostream& os,const Fixed &obj);
bool operator< (const Fixed& one, const Fixed& two);
bool operator>(const Fixed&one , const Fixed&two);
bool operator<=(const Fixed&one, const Fixed &two);
bool operator>=(const Fixed&one,const Fixed &two);
bool operator==(const Fixed&one,const Fixed &two);
bool operator!=(const Fixed&one, const Fixed &two);


#endif