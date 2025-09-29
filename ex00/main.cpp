#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i * 2);
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(vec, 7); // not in the vector
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}