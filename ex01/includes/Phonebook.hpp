/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:54:24 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:54:26 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

# include 	"../includes/Contact.hpp"

#define color_one "\e[01;32m"
#define color_two "\e[01;33m"
#define color_reset "\e[0m"

class   Phonebook {

private:
	Contact _contacts[8];
	int		_index;
	int		_size;

public:
	Phonebook(void);
	 ~Phonebook(void);

	int		get_size(void) const;
	void	add_contact(std::string element[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
	void	display_all(void);
};


#endif
