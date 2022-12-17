/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:12:03 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 19:28:26 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstdlib>
# include <iostream>

class Zombie
{
  private:
	std::string _name;
	void setName(std::string name);

  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	static Zombie *newZombie(std::string name);
	static void randomChump(std::string name);
	static Zombie *zombieHorde(int N, std::string name);
};

#endif
