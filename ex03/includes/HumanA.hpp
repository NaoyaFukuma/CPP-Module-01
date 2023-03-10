/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:29:18 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 22:40:13 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;

  public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack(void) const;
};

#endif
