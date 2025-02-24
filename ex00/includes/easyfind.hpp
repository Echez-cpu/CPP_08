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
int	easyfind(T const & arr, int value);

#endif
