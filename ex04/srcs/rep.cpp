/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:14:44 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/18 23:26:51 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rep.hpp"

Reprace::Reprace(std::string filename)
	: _inFile(filename), _outFile(filename + ".replace")
{
}

Reprace::~Reprace()
{
}

void Reprace::replace(std::string toFind, std::string replace)
{
	size_t	pos;

	std::ifstream ifs(_inFile);
	if (ifs.is_open())
	{
		std::string content;
		std::getline(ifs, content, '\0');
		std::ofstream ofs(_outFile);
		for (pos = content.find(toFind); pos != std::string::npos; pos = content.find(toFind))
		{
			content.erase(pos, toFind.length());
			content.insert(pos, replace);
		}
		ofs << content;
		ofs.close();
		ifs.close();
	}
	else
	{
		std::cerr << "Unable to open the file." << std::endl;
		exit(EXIT_FAILURE);
	}
}
