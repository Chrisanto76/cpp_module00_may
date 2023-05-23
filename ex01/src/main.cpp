/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:54:17 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:54:19 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"../includes/Phonebook.hpp"


static int     is_number_ok(std::string number)
{
	int     i;

	i =0;
	while (number[i])
	{
		if (number[i] == ' ')
		{
			i++;
			continue;
		}
		if (number[i] < '0' || number[i] > '9')
				return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	Phonebook       phonebook;
	std::string     element[5];
	std::string     input;
	int             index;
	std::string		title[] = {"First Name: ", "Last Name: ", "Nick Name: ", "Phone NUmber: ", "Darkest Secret: "}; 

	//phonebook.display_all();
	std::cout << "\001\033[1;35m\002Valid commands : ADD SEARCH EXIT \n\n\001\033[0;0m\002";
	//tant que l'entree reste ouverte
	while (42 && std::cin.eof() == 0)
	{
		std::cout << "\001\033[1;34m\002PhoneBook> \001\033[0;0m\002";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "\001\033[1;34m\002\nEnter Contact Information\001\033[0;0m\002" << std::endl;
			for (int i = 0; i < 5; i++)
			{
				while (42) 
				{
					std::cout << title[i];
					std::getline(std::cin, element[i]);
					if (i != 3 && !element[i].empty())
						break ;       // not phone number is not empty
					if (i == 3 && !element[i].empty() && is_number_ok(element[3]))  // phone number   
						break ;       // phone number is not empty and is digit
				}
			}
			
			phonebook.add_contact(element);
			std::cout << "\001\033[0;32m\002Contact Added Successfully!\001\033[0;32m\002\n" << std::endl;
			std::cout << color_one << "Enter Contact Information" << color_reset << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "\nPlease Enter Index: ";
			std::cin >> index;
			if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
			{
				std::cout << "Wrong Index!\n" <<std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue;
			}
			phonebook.display_contact(index);
			std::cin.clear();
			std::getline(std::cin, input);
			continue; 
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "--- Invalid Command ---\n" << std::endl;
	}
}
