/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:16:15 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 19:33:35 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	bool	valid;
	int		N;
	Zombie	*zombiz;

	std::cout << "\e[33;1mC++ Module 01 ex01 Creating zombies class array on the heap.\e[m" << std::endl;
	std::cout << "\n\e[3;2mEnter the name of the zombie and number of zombies!\n\e[m" << std::endl;
	std::cout << "\e[32mZombies name > \e[m" << std::flush;
	std::string name;
	valid = false;
	do
	{
		std::getline(std::cin, name);
		if (std::cin.eof() || std::cin.bad())
			std::exit(EXIT_FAILURE);
		if (std::cin.good() && !name.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input; please try again." << std::endl;
		}
	} while (!valid);
	std::cout << "\n\e[32mNumber of zombies > \e[m" << std::flush;
	valid = false;
	do
	{
		std::cin >> N;
		if (std::cin.eof() || std::cin.bad())
			std::exit(EXIT_FAILURE);
		if (std::cin.good())
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input; please try again." << std::endl;
		}
	} while (!valid);
	zombiz = Zombie::zombieHorde(N, name);
	for (int i = 0; i < N; ++i)
	{
		std::cout << "No," << i << " " << std::flush;
		zombiz[i].announce();
	}
	delete[] zombiz;
	return (0);
}
