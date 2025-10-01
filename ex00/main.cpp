#include "easyfind.hpp"

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
    try {
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        std::list<int> l;
        l.push_back(5);
        l.push_back(15);
        l.push_back(25);

        // Vector test
        std::cout << "Searching 20 in vector..." << std::endl;
        std::vector<int>::iterator vit = easyfind(v, 20);
        std::cout << "Found: " << *vit << std::endl;

        // List test
        std::cout << "Searching 25 in list..." << std::endl;
        std::list<int>::iterator lit = easyfind(l, 25);
        std::cout << "Found: " << *lit << std::endl;

        // Not found test
        std::cout << "Searching 99 in vector..." << std::endl;
        easyfind(v, 99); // will throw
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
