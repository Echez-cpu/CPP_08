#include "../includes/easyfind.hpp"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define Y     "\033[33m"
#define L     "\033[39m"




int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    try {
        std::vector<int>::iterator it = easyfind(vec, 30);
        std::cout << Y << "Found in vector: " << *it << RESET << std::endl;
    } catch (const NoValueException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 100);
        std::cout << "Found in vector: " << *it << std::endl;
    } catch (const NoValueException &e) {
        std::cout << RED << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(15);
    lst.push_back(25);
    lst.push_back(35);

    try {
        std::list<int>::iterator it = easyfind(lst, 15);
        std::cout << L << "Found in list: " << *it << RESET << std::endl;
    } catch (const NoValueException &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(lst, 100);
        std::cout << L << "Found in list: " << *it << RESET << std::endl;
    } catch (const NoValueException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    return 0;
}
