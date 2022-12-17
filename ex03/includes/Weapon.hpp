/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:17:03 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 22:35:59 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  private:
	std::string _type;

  public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string &getType() const;
	void setType(std::string newType);
};

#endif
