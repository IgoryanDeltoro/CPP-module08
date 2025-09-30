#include "Span.hpp"

Span::Span(unsigned int n) :_N(n), _data() {}

void Span::addNumber(int n) {
    std::cout << "_data.size(): " << _data.size() << std::endl;
    std::cout << "_N: " << _N << std::endl;

    if (_data.size() == _N) {
        std::cout << "The buffer is already full!\n";
        return;
    }
    _data.push_back(n);
}
