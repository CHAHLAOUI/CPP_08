#include "easyfind.hpp"



int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(9);

    try {
        std::vector<int>::iterator it = easyfind(numbers, 5);
        std::cout << "Found: " << *it << std::endl;
         it = easyfind(numbers, 1); 
        std::cout << "Found: " << *it << std::endl;
        it = easyfind(numbers, 2); 
        std::cout << "Found: " << *it << std::endl;

        it = easyfind(numbers, 21); 
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const NotFoundException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}