#include <iostream>


int main(int argc, char const *argv[])
{
    const char* in_lable = "[IN]: ";
    const char* out_lable = "[OUT]: ";

    std::string text = "";

    std::cout << in_lable;
    std::getline(std::cin, text);

    return 0;
}

