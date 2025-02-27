/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:40:51 by pokpalae          #+#    #+#             */
/*   Updated: 2025/02/27 13:40:56 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define Y     "\033[33m"
#define L     "\033[32m"

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

      //  sp.bigSpan(5000);        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << GREEN << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
        std::cout << Y << "Longest Span: " << sp.longestSpan() << RESET << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n===== Exception Tests =====" << std::endl;
    try {
        Span emptySpan(0);
        std::cout << RED << emptySpan.shortestSpan() << RESET << std::endl; // Should throw
    } catch (const std::exception &e) {
        std::cerr << "Expected Exception: " << e.what() << std::endl;
    }
    
    try {
        Span oneElementSpan(1);
        oneElementSpan.addNumber(42);
        std::cout << RED << oneElementSpan.longestSpan() << RESET << std::endl; // Should throw
    } catch (const std::exception &e) {
        std::cerr << "Expected Exception: " << e.what() << std::endl;
    }

    try {
        Span fullSpan(2);
        fullSpan.addNumber(10);
        fullSpan.addNumber(20);
        fullSpan.addNumber(30); // Should throw
    } catch (const std::exception &e) {
        std::cerr << RED << "Expected Exception: " << e.what() << RESET << std::endl;
    }
    
    std::cout << "\n===== Large Test with 10,000 numbers or more if you like =====" << std::endl;
    try {
        Span largeSpan(10000);
        std::vector<int> bigVec;
        std::srand(std::time(NULL));
        
        for (int i = 0; i < 10000; i++) {
            bigVec.push_back(std::rand());
        }
        
        largeSpan.addNumber_2(bigVec.begin(), bigVec.end());
        std::cout << Y << "Shortest Span: " << largeSpan.shortestSpan() << RESET << std::endl;
        std::cout << GREEN << "Longest Span: " << largeSpan.longestSpan() << RESET << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Unexpected Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
