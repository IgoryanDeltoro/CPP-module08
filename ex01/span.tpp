#ifndef SPAN_TPP
#define SPAN_TPP
#include "Span.hpp"

template <typename Iter>
void Span::addNumber(Iter b, Iter e) {
    if (_data.size() + std::distance(b, e) > _N) {
        throw std::runtime_error("Span overflow with range insert");
    }
    _data.insert(_data.end(), b, e);
}

#endif