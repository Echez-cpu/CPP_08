#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    try {
        std::vector<int>::iterator it = easyfind(vec, 30);
        std::cout << "Found in vector: " << *it << std::endl;
    } catch (const NoValueException &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 100);
        std::cout << "Found in vector: " << *it << std::endl;
    } catch (const NoValueException &e) {
        std::cout << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(15);
    lst.push_back(25);
    lst.push_back(35);

    try {
        std::list<int>::iterator it = easyfind(lst, 15);
        std::cout << "Found in list: " << *it << std::endl;
    } catch (const NoValueException &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(lst, 100);
        std::cout << "Found in list: " << *it << std::endl;
    } catch (const NoValueException &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
