/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:36:01 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/14 16:31:55 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void	Contact::set_first_name(str first)
{
	this->first = first;
}

void	Contact::set_last_name(str last)
{
	this->last = last;
}

void	Contact::set_nick_name(str nick)
{
	this->nick = nick;
}

void	Contact::set_phone(str phone)
{
	this->phone = phone;
}

void	Contact::set_secret(str secret)
{
	this->secret = secret;
}

str	Contact::get_first_name(void) const
{
	return this->first;
}

str	Contact::get_last_name(void) const
{
	return this->last;
}

str	Contact::get_nick_name(void) const
{
	return this->nick;
}

str	Contact::get_phone(void) const
{
	return this->phone;
}

str	Contact::get_secret(void) const
{
	return this->secret;
}
