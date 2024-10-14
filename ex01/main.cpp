/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:18:41 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/14 17:03:12 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>

int	main(void)
{
	str	command;

	Phonebook	phonebook;

	system("clear");
	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (!command.compare("EXIT"))
			break;
		else if (!command.compare("ADD"))
			phonebook.add_contact();
		else if (!command.compare("SEARCH"))
			phonebook.search();
		else
			std::cout << "Command not found, type again !" << std::endl;
	}
}
