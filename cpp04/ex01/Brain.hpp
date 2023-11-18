/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:49:00 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/18 13:05:54 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
    std::string ideas[100];
    public:
    Brain();
    ~Brain();
    Brain(const Brain&);
    Brain &operator=(const Brain&);
    void set_idaes(const std::string&,const int&);
    std::string get_ideas(int);
};

#endif