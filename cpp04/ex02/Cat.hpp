/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:43 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/18 11:05:10 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"

#include "Animal.hpp"

class Cat : public Animal
{
    Brain *brain;
    public:
    Cat();
    Cat(const Cat&);
    Cat &operator=(const Cat&);
    ~Cat();
    void makeSound() const;
};
#endif