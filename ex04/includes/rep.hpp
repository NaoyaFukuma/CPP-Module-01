/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rep.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:14:45 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/18 23:27:08 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REP_HPP
# define REP_HPP

# include <fstream>
# include <iostream>

class Reprace
{
  private:
	std::string _inFile;
	std::string _outFile;

  public:
	Reprace(std::string filename);
	~Reprace();

	void replace(std::string s1, std::string s2);
};

#endif
