#include <iostream>

int main()
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::cout << "String adress: "<< &str << std::endl;
    std::cout << "stringPTR adress: "<< stringPTR << std::endl;
    std::cout << "stringREF adress: "<< &stringREF << std::endl;
    std::cout << "String value: "<< str << std::endl;
    std::cout << "stringPTR value: "<< *stringPTR << std::endl;
    std::cout << "stringREF value: "<< stringREF << std::endl;
}