/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:55 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/04 14:12:21 by hznagui          ###   ########.fr       */
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
    Fixed operator<<
    ~Fixed();
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits( int const raw );
};

#endif