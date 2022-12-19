#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::string input;

	std::cout << "\e[3;2mEnter [DEBUG, INFO, WARNING, ERROR]\nOutputs a message according to the command entered. \nYou can exit by typing exit.\n\e[m" << std::flush;
	do
	{
		std::cout << "\e[32m > \e[m" << std::flush;
		std::cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));
}
