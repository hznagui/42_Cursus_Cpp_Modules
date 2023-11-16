/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:47:33 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 13:40:08 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat:public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat&);
    WrongCat &operator=(const WrongCat&);
    ~WrongCat();
    void makeSound() const;
};
#endif