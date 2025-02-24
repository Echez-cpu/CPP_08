#ifndef  EASYFIND_HPP
#define  EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stdexcept>


class NoValueException : public std::exception {
	public:
		virtual const char *	what() const throw();
};

template<typename T>
typename T::iterator easyfind(T const &arr, int value);

#include "../srcs/easyfind.tpp"

#endif
