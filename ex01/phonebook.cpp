/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:39:25 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/15 21:00:01 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void) : curr_contact(0), nb_contacts(0)
{
	std::cout << "Phonebook created !" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook deleted !" << std::endl;
}

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
	std::cout << "Phone number: ";
	std::getline(std::cin, phone);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, secret);
	if (first.empty() || last.empty() || nick.empty() || phone.empty() || secret.empty())
	{
		std::cout << "Empty field not allowed, contact not added !" << std::endl;
		std::cout << "press enter to continue...";
		std::getchar();
		system("clear");
		return ;
	}
	this->list[this->curr_contact].set_first_name(first);
	this->list[this->curr_contact].set_last_name(last);
	this->list[this->curr_contact].set_nick_name(nick);
	this->list[this->curr_contact].set_phone(phone);
	this->list[this->curr_contact].set_secret(secret);
	if (this->curr_contact < 7)
		this->curr_contact++;
	else
		this->curr_contact = 0;
	if (this->nb_contacts < 8)
		this->nb_contacts++;
	std::cout << "Contact added !" << std:: endl;
	std::cout << "press enter to continue...";
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
	if (index.length() > 1 || index[0] < 49 || index[0] > 48 + this->nb_contacts)
	{
		std::cout << "Wrong index !" << std::endl;
		return ;
	}
	detail(index[0] - 49);
}

void	Phonebook::overview(void) const
{
	int	i;
	str	str;

	i = 0;
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
	while (i < this->nb_contacts)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		str = formatted_str(this->list[i].get_first_name());
		std::cout << std::setw(10) << str << "|";
		str = formatted_str(this->list[i].get_last_name());
		std::cout << std::setw(10) << str << "|";
		str = formatted_str(this->list[i].get_nick_name());
		std::cout << std::setw(10) << str << "|";
		std::cout << std::endl;
		i++;
	}
}

str	Phonebook::formatted_str(str str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	Phonebook::detail(int index) const
{
	std::cout << "Contact index : " << index + 1 << std::endl;
	std::cout << "First name : " << this->list[index].get_first_name() << std::endl;
	std::cout << "Last name : " << this->list[index].get_last_name() << std::endl;
	std::cout << "Nick name : " << this->list[index].get_nick_name() << std::endl;
	std::cout << "Phone : " << this->list[index].get_phone() << std::endl;
	std::cout << "Secret : " << this->list[index].get_secret() << std::endl;
	std::cout << "press enter to continue...";
	std::getchar();
	system("clear");
}
