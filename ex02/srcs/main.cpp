#include "../includes/MutantStack.hpp"
#include <iostream>
#include <list>

/*void testMutantStack() {
    std::cout << "\n--- Testing MutantStack ---\n" << std::endl;
    
    MutantStack<int> mstack;

    // Push elements
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop(); // Removes 17
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    // Push more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "\nIterating from begin() to end():\n";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "\nIterating in reverse (rbegin() to rend()):\n";
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Copy constructor
    MutantStack<int> copyStack(mstack);
    std::cout << "\nCopied stack (should match original):\n";
    for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Assignment operator
    MutantStack<int> assignedStack;
    assignedStack = mstack;
    std::cout << "\nAssigned stack (should match original):\n";
    for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Compare with std::list (should produce same output)
    std::list<int> lst(mstack.begin(), mstack.end());
    std::cout << "\nTesting with std::list (should match MutantStack output):\n";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    testMutantStack();
    return 0;
}*/
