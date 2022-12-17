/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:20:31 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 22:11:47 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " was destroyed by the destructor." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "\e[45m\e[30m" << _name << ": BraiiiiiiinnnzzzZ...\e[m" << std::endl;
}

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*new_obj;
	try	{
		new_obj = new Zombie(name);
	}
	catch (std::bad_alloc &bad_alloc_class) {
		std::cerr << "bad_alloc" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (new_obj);
}

void	Zombie::randomChump(std::string name)
{
	Zombie zombi(name);
	zombi.announce();
}
