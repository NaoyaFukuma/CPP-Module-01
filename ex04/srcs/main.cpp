/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:14:06 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/18 23:27:41 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rep.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: Type and run the following: ./replace <input_filename> <find_str> <replace_str>." << std::endl;
		return (EXIT_FAILURE);
	}
	else
	{
		Reprace rep(av[1]);
		rep.replace(av[2], av[3]);
	}
	return (EXIT_SUCCESS);
}
