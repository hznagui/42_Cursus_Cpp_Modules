/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:34:17 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 11:20:25 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
template <class T> std::string easyfind(T container,int find)
{
    (std::find(container.begin(),container.end(),find) != container.end()) ? return "is found" : return "it not found";
}