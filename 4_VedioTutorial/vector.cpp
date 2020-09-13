#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() 
{
    std::vector<std::string> names;

    names.push_back("xuke");
    names.push_back("cExuke");
    names.push_back("aExuke");
    names.push_back("bExuke");

    std::sort(names.begin(), names.end());

    std::vector<std::string>::iterator iter = names.begin();

    while(iter != names.end()) {
        std::cout << *iter << std::endl;
        ++iter;
    }
    
    return 0;
}