#include "Span.hpp"
#include <climits>

Span::Span(unsigned int n) :_N(n), _data() {}
Span::~Span() {}

void Span::addNumber(int n) {
    if (_data.size() >= _N) {
        throw std::out_of_range("The buffer is already full!");
    }
    _data.push_back(n);
}

int Span::shortestSpan() {
    if (_data.size() < 2)
        throw std::runtime_error("Not enough numbers to find span");

    std::vector<int>tmp = _data; 
    sort(tmp.begin(), tmp.end());

    int shortestSpan = INT_MAX;
    int out_n1, out_n2, n1, n2;

    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it) {
        n1 = *it;
        if (it + 1 != tmp.end())
            n2 = *(it + 1);
        else 
            break;
        if ((n2 - n1) < shortestSpan) {
            shortestSpan = n2 - n1;
            out_n1 = n1;
            out_n2 = n2;
        }
    }
    std::cout << "The shortens span is between number " << out_n1 << " and " << out_n2 << std::endl;
    return shortestSpan;
}
