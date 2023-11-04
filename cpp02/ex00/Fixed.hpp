/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:55 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/04 11:09:11 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    int number_value;
    static const int fractional_bits;
    public:
    Fixed();
    Fixed(Fixed &obj);
    Fixed  &operator= ( Fixed &obj);
    ~Fixed();
    int getRawBits( void )const;
    void setRawBits( int const raw );
};

#endif