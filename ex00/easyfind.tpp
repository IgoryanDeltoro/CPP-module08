#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
    typename T::iterator it = find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not find");
    }
    return it;
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int value) {
    typename T::const_iterator it = find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not find");
    }
    return it;
}