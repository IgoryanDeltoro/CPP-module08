#include "Span.hpp"

int main(void) {

    int size = 10;

    Span s(size);
    for (int i = 0; i <= size; i++) {
        int value = rand() % 10;
        s.addNumber(value);
    }
}