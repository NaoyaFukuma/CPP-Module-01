/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:38:46 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 23:11:25 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
	HumanB();
	HumanB(std::string name, Weapon *weapon = NULL);
	~HumanB();

	void attack(void) const;
	void setWeapon(Weapon &weapon);
};

#endif
