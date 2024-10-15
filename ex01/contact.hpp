/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:01:06 by tafocked          #+#    #+#             */
/*   Updated: 2024/10/15 20:48:10 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

typedef std::string str;

class Contact
{
	public:
		Contact(void);
		~Contact(void);
	void	set_first_name(str first);
	void	set_last_name(str last);
	void	set_nick_name(str nick);
	void	set_phone(str phone);
	void	set_secret(str secret);
	str		get_first_name(void) const;
	str		get_last_name(void) const;
	str		get_nick_name(void) const;
	str		get_phone(void) const;
	str		get_secret(void) const;

	private:
	str		first;
	str		last;
	str		nick;
	str		phone;
	str		secret;
};

#endif
