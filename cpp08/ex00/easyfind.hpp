/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:34:17 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 11:28:15 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
template <class T> std::string easyfind(T container,int find)
{
    return (std::find(container.begin(),container.end(),find) != container.end()) ? ("is found") : ("it not found");
}