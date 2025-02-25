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


		template <typename InputIterator>
        	void addNumber_2(InputIterator begin, InputIterator end);

		class MaxNumbersException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class NotEnoughNumbersException: public std::exception {
			public:
				virtual const char *	what() const throw();
		};

	private:
		std::vector<int>	input_array;
		unsigned int		input_maxSize;
		unsigned int		actual_size;

};

#include "../srcs/Span.tpp"

#endif
