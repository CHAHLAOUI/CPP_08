#include "Span.hpp"
#include <algorithm>  // std::sort, std::min_element, std::max_element

const char* FullSpanException::what() const throw() {
    return "Span is full, cannot add more numbers";
}

const char* NotEnoughNumbersException::what() const throw() {
    return "Not enough numbers to find a span";
}

Span::Span(unsigned int N) : _maxSize(N) {}

void Span::addNumber(int num) {
    if (_numbers.size() >= _maxSize) {
        throw FullSpanException();
    }
    _numbers.push_back(num);
}

int Span::shortestSpan() {
    if (_numbers.size() < 2) {
        throw NotEnoughNumbersException();
    }

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int minSpan = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; i++) {
        int diff = sorted[i+1] - sorted[i];
        if (diff < minSpan) {
            minSpan = diff;
        }
    }
    return minSpan;
}

int Span::longestSpan() {
    if (_numbers.size() < 2) {
        throw NotEnoughNumbersException();
    }

    int minValue = *std::min_element(_numbers.begin(), _numbers.end());
    int maxValue = *std::max_element(_numbers.begin(), _numbers.end());

    return maxValue - minValue;
}
