/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:12:03 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/16 13:46:15 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	static Zombie *newZombie(std::string name);
	static void randomChump(std::string name);
};

#endif
