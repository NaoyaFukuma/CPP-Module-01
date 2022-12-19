/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:09:24 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/19 12:38:47 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	Harl();
	~Harl();

	void complain(std::string level);
};

enum menu {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};
