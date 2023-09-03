#include "main.hpp"

void    ft_replace(std::string &read_barn, std::string search, std::string new_word)
{
    int pos;

    int sea_len = search.length();
    int new_len = new_word.length();
    pos = 0;
    while (1)
    {
        pos = read_barn.find(search, pos);
        if (pos == -1)
            break;
        read_barn.erase(pos, sea_len);
		read_barn.insert(pos, new_word);
		pos += new_len;
    }
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

    if (argc != 4)
        return (0);
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
    ft_replace(read_barn, argv[2], argv[3]);
    new_file << read_barn;
    new_file.close();
}