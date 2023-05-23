/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:54:00 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:54:01 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class   Contact {

private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nick_name;
	std::string		_phone_number;
	std::string		_darkest_secret;
public:
	Contact(void);
	~Contact(void);
	
	const	std::string&	get_first_name(void) const;
	const	std::string&	get_last_name(void) const;
	const	std::string&	get_nick_name(void) const;
	const	std::string&	get_phone_number(void) const;
	const	std::string&	get_darkest_secret(void) const;
	void						set_first_name(std::string first_tname);
	void						set_last_name(std::string last_name);
	void						set_nick_name(std::string nick_name);
	void						set_phone_number(std::string phone_number);
	void						set_darkest_secret(std::string darkest_secret);


};


#endif /* CONTACT_CLASS_HPP */
