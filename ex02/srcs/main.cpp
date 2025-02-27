#include "../includes/MutantStack.hpp"
#include <iostream>
#include <list>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define Y     "\033[33m"
#define L     "\033[32m"




void testMutantStack() {
    std::cout << GREEN <<"\n--- Testing MutantStack ---\n" << RESET << std::endl;
    
    MutantStack<int> mstack;

    // Push elements
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop(); // Removes 17
    std::cout << GREEN << "Size after pop: " << mstack.size() << RESET << std::endl;

    // Push more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << Y << "\nIterating from begin() to end():\n" << RESET;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << GREEN << "\nIterating in reverse (rbegin() to rend()):\n" << RESET;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Copy constructor
    MutantStack<int> copyStack(mstack);
    std::cout << Y << "\nCopied stack (should match original):\n" << RESET;
    for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Assignment operator
    MutantStack<int> assignedStack;
    assignedStack = mstack;
    std::cout << GREEN << "\nAssigned stack (should match original):\n" << RESET;
    for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Compare with std::list (should produce same output)
    std::list<int> lst(mstack.begin(), mstack.end());
    std::cout << Y << "\nTesting with std::list (should match MutantStack output):\n" << RESET;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    testMutantStack();
    return 0;
}



/*int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
}*/


/*int main()
{
	std::list<int> mstack;
	
	mstack.push_front(5);
	mstack.push_front(17);

	std::cout << mstack.front() << std::endl;

	mstack.pop_front();

	std::cout << mstack.size() << std::endl;

	mstack.push_front(3);
	mstack.push_front(5);
	mstack.push_front(737);

	//[...]
	mstack.push_front(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		ite--;
		std::cout << *ite << std::endl;
	}

	std::list<int> s(mstack);
	return 0;
}*/


/*#include <list>

int main()
{
    std::list<int> mylist;     // Create an instance of std::list for integers.
    
    mylist.push_back(5);   
    mylist.push_back(17);
    
    std::cout << mylist.back() << std::endl;
    
    mylist.pop_back();      
    
    std::cout << mylist.size() << std::endl;
    
    mylist.push_back(3);
    mylist.push_back(5);
    mylist.push_back(737);
    mylist.push_back(0);
    
    // Iterate over the elements in the list using iterators
    std::list<int>::iterator it = mylist.begin();
    std::list<int>::iterator ite = mylist.end();
    
    while (it != ite) {
        std::cout << *it << std::endl; 
        ++it;                         .
    }
    
    return 0;
}*/

