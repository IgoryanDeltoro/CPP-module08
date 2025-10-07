#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

template <typename T, typename Container = std::vector<T> >
class MutantStack: public std::stack<T, Container> {
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;

        MutantStack();
        MutantStack(const MutantStack &other);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &other);

        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;

};

#include "MutantStack.tpp"

#endif 
