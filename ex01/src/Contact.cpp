/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:54:10 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:54:11 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"../includes/Contact.hpp"

Contact::Contact(void):
						_first_name("-"),
						_last_name("-"),
						_nick_name("-"),
						_phone_number("-"),
						_darkest_secret("-")
{
	std::cout << "Constructor contact called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor contact called" << std::endl;
	return ;
}

const	std::string&	Contact::get_first_name() const {

	return (this->_first_name);
}

const	std::string&	Contact::get_last_name() const {

	return (this->_last_name);
}

const	std::string&	Contact::get_nick_name() const {

	return (this->_nick_name);
}

const	std::string&	Contact::get_phone_number() const {

	return (this->_phone_number);
}

const	std::string&	Contact::get_darkest_secret() const {

	return (this->_darkest_secret);
}

void	Contact::set_first_name(std::string first_name) {

	this->_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name) {

	this->_last_name = last_name;
}

void	Contact::set_nick_name(std::string nick_name) {

	this->_nick_name = nick_name;
}

void	Contact::set_phone_number(std::string phone_number) {

	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret) {

	this->_darkest_secret = darkest_secret;
}
