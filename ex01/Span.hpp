#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class FullSpanException : public std::exception {
public:
    virtual const char* what() const throw();
};

class NotEnoughNumbersException : public std::exception {
public:
    virtual const char* what() const throw();
};

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span(unsigned int N);

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};

#endif
