#include "Span.hpp"
#include <iostream>
#include <vector>


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
            int numbers[] = {6};
            int size = sizeof(numbers) / sizeof(numbers[0]);
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
            s.addNumber(200);
            s.addNumber(extra.begin(), extra.end());
            std::cout << s.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}