/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:39 by hznagui           #+#    #+#             */
/*   Updated: 2024/01/18 13:43:10 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    size=0;
}
Span::Span(unsigned int number)
{
    size=number;
}
Span::Span(Span &obj)
{
    size=obj.size;
}
Span &Span::Span(Span &obj)
{
    size=obj.size;
}
