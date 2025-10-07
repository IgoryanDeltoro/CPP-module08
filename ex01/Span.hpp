#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

class Span {
    private:
        unsigned int _N;
        std::vector<int> _data;

        Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

    public:
        Span(unsigned int n);
        ~Span();


        template <typename Iter>
        void addNumber(Iter b, Iter e);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();

};

#include "Span.tpp"

#endif 
