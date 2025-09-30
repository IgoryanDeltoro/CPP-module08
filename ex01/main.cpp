#include "Span.hpp"

int main(void) {

    {
        try
        {
            int size = 10;
            int numbers[] = {6,6,17,10,14,12,35,36,21,0,9};

            Span s(size);

            for (int i = 0; i < size; i++) {
                s.addNumber(numbers[i]);
            }
            s.shortestSpan();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            int size = 10000;

            std::vector<int> extra;
            for (int i = 0; i < size; i++)
                extra.push_back(i);

            Span s(size);
            s.addNumber(extra.begin(), extra.end());
            std::cout << s.shortestSpan() << std::endl; // 1
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}