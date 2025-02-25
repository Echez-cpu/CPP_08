#include "../includes/Span.hpp"

Span::Span() : input_maxSize(0), actual_size(0) {}

Span::Span(unsigned int N) : input_maxSize(N), actual_size(0) {}

Span::Span(Span const &source) {
	*this = source;
}

Span::~Span() {} // Does nothing because std::vector cleans up memory automatically

Span &Span::operator=(Span const &original_copy) {
	if (this != &original_copy) {
		this->input_array = original_copy.input_array;
		this->input_maxSize = original_copy.input_maxSize;
		this->actual_size = original_copy.actual_size;
	}
	return *this;
}

void Span::addNumber(int n) {
	if (this->actual_size == this->input_maxSize)
		throw Span::MaxNumbersException();
	this->input_array.push_back(n);
	this->actual_size++;
}
