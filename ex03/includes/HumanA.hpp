/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:29:18 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 22:29:43 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;
	HumanA();

  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack(void) const;
};
