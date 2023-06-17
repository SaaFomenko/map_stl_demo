#include <iostream>
#include <map>
#include <set>

struct my_pair
{
    const char first;
    int second;

    my_pair(std::pair<const char, int> obj) :
        first(obj.first),
        second(obj.second)
    {}
    virtual ~my_pair()
    {}

    const bool operator<(const my_pair& r) const
    {
        if (second != r.second) return second > r.second;
        return first < r.first;
    }

    const bool operator>(const my_pair& r) const
    {
       if (second != r.second) return second > r.second;
       return first > r.first;
    }
};

int main(int argc, char const *argv[])
{
    const char* in_lable = "[IN]: ";
    const char* out_lable = "[OUT]: ";
    const char* col_div = ": ";
    const char row_div = '\n';

    std::string text = "Hello world!!";

    std::cout << in_lable << text << '\n';
    //std::getline(std::cin, text);

    const unsigned int size = text.length();
    const char* chars = text.c_str();

    std::map<const char, int> symvol_count;

    for (int i = 0; i < size; ++i)
    {
        symvol_count[chars[i]] += 1;
    }

    std::set<my_pair> sort_map_max(symvol_count.begin(), symvol_count.end());

    std::cout << out_lable << row_div;
    for (auto const &elem : sort_map_max)
    {
        std::cout << elem.first << col_div << elem.second << row_div;
    }

    return 0;
}