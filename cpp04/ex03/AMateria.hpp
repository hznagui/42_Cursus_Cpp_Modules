/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:02:59 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/20 11:12:12 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>

class AMateria
{
protected:
std::string Type;
public:
AMateria(std::string const & type);//
AMateria();//
AMateria(const AMateria&);//
virtuel ~AMateria();//
AMateria &operator=(const AMateria&);//
std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};

#endif