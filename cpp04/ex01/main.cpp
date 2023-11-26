/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:49 by hznagui           #+#    #+#             */
/*   Updated: 2023/11/26 16:51:37 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void test()
{
    system("leaks Animal");
}
int main()
{
    atexit(test);
 Animal *meta[4];
meta[0] = new Dog();
meta[1] = new Dog();
meta[2] = new Cat();
meta[3] = new Cat();
std::cout << meta[0]->getType() << " " << std::endl;
std::cout << meta[3]->getType() << " " << std::endl;
meta[1]->makeSound();
meta[2]->makeSound();
delete meta[0];
delete meta[1];
delete meta[2];
delete meta[3];
return 0;
}