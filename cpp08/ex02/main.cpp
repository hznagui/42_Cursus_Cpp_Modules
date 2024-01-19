/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:42:53 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/19 16:47:58 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack2;

mstack2.push(17);
mstack2.push(5);
mstack2.push(5);

std::cout << " stack1 top :"<< mstack2.top() << std::endl;

mstack2.pop();

std::cout << " stack1 size :"<<mstack2.size() << std::endl;
mstack2.push(3);
mstack2.push(5);
mstack2.push(737);
mstack2.push(0);
MutantStack<int>::iterator it = mstack2.begin();
MutantStack<int>::iterator ite = mstack2.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int > s(mstack2);
return 0;
}
