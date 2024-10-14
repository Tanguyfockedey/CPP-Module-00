/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:28 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/14 18:06:39 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"


typedef std::string str;

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void	add_contact();
		void	search();

	private:
		int		curr_contact;
		int		nb_contacts;
		Contact	list[8];
		void	overview(void) const;
		void	detail(int index) const;
};

#endif
