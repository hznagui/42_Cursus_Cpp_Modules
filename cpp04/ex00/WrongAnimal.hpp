/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:47:28 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/16 14:12:02 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal&);
    WrongAnimal &operator=(const WrongAnimal&);
    ~WrongAnimal();
    std::string getType()const;
    void makeSound() const;
};
#endif