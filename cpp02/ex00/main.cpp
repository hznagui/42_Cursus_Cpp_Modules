/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:41:37 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/31 10:11:13 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <stdio.h>
 
int main()
{
    std::fixed();
    // left shift for negative value
    printf("2 << -5 = %d\n", (2 << 5));
 
    //    right shift for negative value
    printf("2 >> -5 = %d", (2 >> 5));
 
    return 0;//0.0011 00110011 00110011
}
