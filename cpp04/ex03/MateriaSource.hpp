/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:50:10 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/23 21:11:20 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource:public IMateriaSource
{
    AMateria *inventory[4];
    public :
    MateriaSource();//
    MateriaSource(const MateriaSource&);//
    MateriaSource &operator=(const MateriaSource&);//
    ~MateriaSource();
    void learnMateria(AMateria*);//
    AMateria* createMateria(std::string const & type);//
};
#endif