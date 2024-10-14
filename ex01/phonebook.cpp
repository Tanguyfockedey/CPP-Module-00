/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:39:25 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/14 18:23:43 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void) : curr_contact(0), nb_contacts(0)
{}

Phonebook::~Phonebook(void)
{}

void	Phonebook::add_contact(void)
{
	str	first;
	str	last;
	str	nick;
	str	phone;
	str	secret;

	system("clear");
	std::cout << "New contact" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, first);
	std::cout << "Last name: ";
	std::getline(std::cin, last);
	std::cout << "Nick name: ";
	std::getline(std::cin, nick);
	std::cout << "Phone: ";
	std::getline(std::cin, phone);
	std::cout << "Secret: ";
	std::getline(std::cin, secret);
	if (first.empty() || last.empty() || nick.empty() || phone.empty() || secret.empty())
	{
		std::cout << "Empty field not allowed, contact not added !" << std::endl;
		std::cout << "press any key to continue...";
		std::getchar();
		system("clear");
		return ;
	}
	this->list[this->curr_contact].set_first_name(first);
	this->list[this->curr_contact].set_last_name(last);
	this->list[this->curr_contact].set_nick_name(nick);
	this->list[this->curr_contact].set_phone(phone);
	this->list[this->curr_contact].set_secret(secret);
	if (this->curr_contact < 8)
		this->curr_contact++;
	else
		this->curr_contact = 0;
	if (this->nb_contacts < 8)
		this->nb_contacts++;
	std::cout << "Contact added !" << std:: endl;
	std::cout << "press any key to continue...";
	std::getchar();
	system("clear");
}

void	Phonebook::search(void)
{
	str	index;

	system("clear");
	overview();
	std::cout << "Choose an index : ";
	std::getline(std::cin, index);
	system("clear");
	if (index[0] < 48 || index[0] > 56)
	{
		std::cout << "Wrong index !" << std::endl;
		return ;
	}
	detail(index[0] - 48);
}

void	Phonebook::overview(void) const
{
	void();
}

void	Phonebook::detail(int index) const
{
	std::cout << "Contact index : " << index << std::endl;
	std::cout << "First name : " << this->list[index].get_first_name() << std::endl;
	std::cout << "Last name : " << this->list[index].get_last_name() << std::endl;
	std::cout << "Nick name : " << this->list[index].get_nick_name() << std::endl;
	std::cout << "Phone : " << this->list[index].get_phone() << std::endl;
	std::cout << "Secret : " << this->list[index].get_secret() << std::endl;
	std::cout << "press any key to continue...";
	std::getchar();
	system("clear");
}
