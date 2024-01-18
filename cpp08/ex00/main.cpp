/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:34:19 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 11:29:27 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v(3,6);
    std::cout << easyfind(v,5)<<std::endl;
    v.push_back(5);
    std::cout << easyfind(v,5)<<std::endl;
}