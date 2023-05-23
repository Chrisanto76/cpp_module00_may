/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:53:38 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:53:40 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        std::string str = std::string(av[i]);
        for (size_t l = 0; l < str.size(); l++)
            std::cout << (char)std::toupper(str[l]);
    }
    std::cout << std::endl;
    return (0);
}

