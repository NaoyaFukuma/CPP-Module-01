/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:32:01 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/16 17:18:21 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string name;

	std::cout << "\e[33;1mC++ Module 01 ex00 Creating zombie on the stack and heap.\e[m" << std::endl;

	std::cout << "\n\e[3;2mCreating zombie on the stack." << std::endl;
	std::cout << "Enter the name of the zombie!\n\e[m" << std::flush;
	std::cout << "\e[32mZombie name > \e[m" << std::flush;
	bool valid = false;
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
	Zombie zombi1(name);
	zombi1.announce();

	std::cout << "\n\e[3;2mCreating zombie on the heap." << std::endl;
	std::cout << "Enter the name of the zombie!\n\e[m" << std::flush;
	std::cout << "\e[32mZombie name > \e[m" << std::flush;
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
	Zombie *zombi2 = Zombie::newZombie(name);
	zombi2->announce();

	std::cout << "\n\e[3;2mCreating zombie on the stack. in randomChump() automatic variable." << std::endl;
	std::cout << "Enter the name of the zombie!\n\e[m" << std::flush;
	std::cout << "\e[32mZombie name > \e[m" << std::flush;
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
	std::cout << "Calling randomChump()." << std::endl;
	Zombie::randomChump(name);

	delete zombi2;
	return (0);
}
