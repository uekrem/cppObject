#include "Harl.hpp"

int find_case(std::string complain)
{
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    for(int i = 0; i < 4;i++)
    {
        if (levels[i] == complain)
            return (i);
    }
    return (-1);
}

void handle_complain(std::string complain,Harl harl)
{
    int index = find_case(complain);
    switch(index)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
	}
	handle_complain(argv[1],harl);
}