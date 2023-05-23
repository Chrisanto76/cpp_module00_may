/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:54:32 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:54:34 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"../includes/Phonebook.hpp"


Phonebook::Phonebook(void):_index(0), _size(0)
{
	std::cout << "Constructor Phonebook called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor Phonebook called" << std::endl;
	return ;
}

void    print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout  << " ";
		std::cout << str;
	}
}

int 	Phonebook::get_size() const
{
	return (this->_size);
}

void    Phonebook::add_contact(std::string element[5]) {

	int index;

	index = this->_index;
	this->_contacts[index].set_first_name(element[0]);
	this->_contacts[index].set_last_name(element[1]);
	this->_contacts[index].set_nick_name(element[2]);
	this->_contacts[index].set_phone_number(element[3]);
	this->_contacts[index].set_darkest_secret(element[4]);
	this->_index = (index + 1) % 8;

	if (this->_index < 8 && this->_size < 8)
		this->_size++;
}

void    Phonebook::display_contact(int i) const
{
	std::cout << color_one << "*----------+----------+----------+----------*" << color_two << std::endl;
	std::cout << color_one << "|          Informations de Contacts         |" << color_two << std::endl;
	std::cout << color_one << "*----------+----------+----------+----------*" << color_two << std::endl;

	std::cout << "First Name : " << this->_contacts[i].get_first_name() << std::endl;
	std::cout << "Last Name : " << this->_contacts[i].get_last_name() << std::endl;
	std::cout << "Nick Name : " << this->_contacts[i].get_nick_name() << std::endl;
	std::cout << "Phone NUmber : " << this->_contacts[i].get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << this->_contacts[i].get_darkest_secret() << std::endl;

}

void	Phonebook::display_phonebook(void) const
{
	int    i;

	i = 0;
	std::cout << "||||| SIZE : " << this->_size << std::endl;
	std::cout << color_one << "#----------+----------+----------+----------#" << color_two << std::endl;
	std::cout << color_one << "|     index|first name| last name|  nickname|" << color_two << std::endl;
	std::cout << color_one << "#----------+----------+----------+----------#" << color_two << std::endl;
	while (i < this->_size && i < 8)
	{
		std::cout << color_one << "|         " << color_two;
		std::cout << i;
		std::cout << color_one "|" << color_two;
		print_name(this->_contacts[i].get_first_name());
		std::cout << color_one "|" << color_two;
		print_name(this->_contacts[i].get_last_name());
		std::cout << color_one "|" << color_two;
		print_name(this->_contacts[i].get_nick_name());
		std::cout << color_one "|" << color_two << std::endl;
		i++;
	}
	std::cout << color_one << "#----------+----------+----------+----------#" << color_two << std::endl;
}

void	Phonebook::display_all(void)
{
	int    i;

	i = 0;
	std::cout << "||||| SIZE : " << 0 << std::endl;
	std::cout << color_one << "#----------+----------+----------+----------#" << color_two << std::endl;
	std::cout << color_one << "|     index|first name| last name|  nickname|" << color_two << std::endl;
	std::cout << color_one << "#----------+----------+----------+----------#" << color_two << std::endl;
	while (i < 8)
	{
		std::cout << color_one << "|         " << color_two;
		std::cout << i;
		std::cout << color_one "|" << color_two;
		print_name(this->_contacts[i].get_first_name());
		std::cout << color_one "|" << color_two;
		print_name(this->_contacts[i].get_last_name());
		std::cout << color_one "|" << color_two;
		print_name(this->_contacts[i].get_nick_name());
		std::cout << color_one "|" << color_two << std::endl;
		i++;
	}
	std::cout << color_one << "#----------+----------+----------+----------#" << color_two << std::endl;
}
