#include "main.hpp"

void    ft_replace()
{

}

int ft_howmany(char **argv)
{
    int         result;
    std::string read_temp;

    std::ifstream input_file(argv[1]);
    std::getline(input_file, read_temp, '\0');
    result = std::count(read_temp.begin(), read_temp.end(), '\n');
    return (result);
}

int main(int argc, char **argv)
{
    int         result;
    std::string read_barn;
    std::string read_temp;

    std::ifstream input_file(argv[1]);
    if (!input_file.is_open())
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    std::ofstream new_file(std::string(argv[1]) + ".replace");
    result = ft_howmany(argv);
    while (std::getline(input_file, read_temp))
    {
        read_barn += read_temp;
            if (result--)
                read_barn += '\n';
    }
    input_file.close();
    ft_replace();
}