#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include "easyfind.tpp"

template <typename T>
typename T::iterator easyfind(T &container, int value);

template <typename T>
typename T::const_iterator easyfind(const T &container, int value);

#endif 