/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:01:53 by hznagui           #+#    #+#             */
/*   Updated: 2023/10/16 16:05:15 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

    void Contact::set_first_name(std::string a){first_name=a;}
    void Contact::set_last_name(std::string a){last_name=a;}
    void Contact::set_nickname(std::string a){nickname=a;}
    void Contact::set_phone_number(std::string a){phone_number=a;}
    void Contact::set_darkest_secret(std::string a){darkest_secret=a;}
    
    std::string Contact::get_first_name(void){return first_name;}
    std::string Contact::get_last_name(void){return last_name;}
    std::string Contact::get_nickname(void){return nickname;}
    std::string Contact::get_phone_number(void){return phone_number;}
    std::string Contact::get_darkest_secret(void){return darkest_secret;}

Contact::Contact()
    {
    first_name="          ";
    last_name="          ";
    nickname="          ";
    phone_number="          ";
    darkest_secret="          ";
    }
