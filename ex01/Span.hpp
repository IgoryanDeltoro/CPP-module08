#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <cstdlib>
#include <vector>

class Span {
    private:
        unsigned int _N;
        std::vector<int>_data;

        Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

    public:
        Span(unsigned int n);

        void addNumber(int n);
};

#endif 
