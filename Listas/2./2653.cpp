#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> jewels;
    std::string jewel;
    while (std::getline(std::cin, jewel)) {
        jewels.insert(jewel);
    }
    std::cout << jewels.size() << std::endl;
    return 0;
}