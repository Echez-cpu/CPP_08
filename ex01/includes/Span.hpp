#ifndef  SPAN_HPP
#define  SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <climits>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <unistd.h>


class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &source);
		~Span();                         // this destructor would do nothing because, std::vector cleans itself up

		Span &	operator=(Span const &original_copy);

		void	addNumber(int n);
		void	bigSpan(int n);
		int		shortestSpan() const;
		int		longestSpan() const;

		class MaxNumbersException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class NoNumberException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class OneNumberException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
	private:
		std::vector<int>	input_array;
		unsigned int		input_maxSize;
		unsigned int		input_size;

};

#endif
