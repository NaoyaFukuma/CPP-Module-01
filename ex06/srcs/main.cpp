#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cerr << "\e[31merror: The argument should be one of the following.\nEnter [DEBUG, INFO, WARNING, ERROR]\e[m" << std::endl;
}
