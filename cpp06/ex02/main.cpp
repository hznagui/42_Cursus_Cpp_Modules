/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:54:37 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/06 13:39:57 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
void test()
{
    system("leaks Identify");
}
int main()
{
    atexit(test);
    Base *a =generate(), *b=generate();
    A obj;
    Base &p = obj;
    identify(a);
    identify(b);
    identify(p);
    delete a;
    delete b;
}