#include "../includes/Span.hpp"

/*int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}*/


int main() {
    std::cout << "===== Basic Tests =====" << std::endl;
    try {
        Span sp(5);

        // array.bigSpan(10000);        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n===== Exception Tests =====" << std::endl;
    try {
        Span emptySpan(0);
        std::cout << emptySpan.shortestSpan() << std::endl; // Should throw
    } catch (const std::exception &e) {
        std::cerr << "Expected Exception: " << e.what() << std::endl;
    }
    
    try {
        Span oneElementSpan(1);
        oneElementSpan.addNumber(42);
        std::cout << oneElementSpan.longestSpan() << std::endl; // Should throw
    } catch (const std::exception &e) {
        std::cerr << "Expected Exception: " << e.what() << std::endl;
    }

    try {
        Span fullSpan(2);
        fullSpan.addNumber(10);
        fullSpan.addNumber(20);
        fullSpan.addNumber(30); // Should throw
    } catch (const std::exception &e) {
        std::cerr << "Expected Exception: " << e.what() << std::endl;
    }
    
    std::cout << "\n===== Large Test with 10,000 numbers =====" << std::endl;
    try {
        Span largeSpan(10000);
        std::vector<int> bigVec;
        std::srand(std::time(NULL));
        
        for (int i = 0; i < 10000; i++) {
            bigVec.push_back(std::rand() % 100000);
        }
        
        largeSpan.addRange(bigVec.begin(), bigVec.end());
        std::cout << "Shortest Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << largeSpan.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Unexpected Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
