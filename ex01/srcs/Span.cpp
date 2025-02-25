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


void Span::bigSpan(int n) {
    if (this->actual_size + n > this->input_maxSize) {
        std::cout << "Can't add " << n << " elements to the array, max_size will be surpassed." << std::endl;
        return;
    }

    int nb = 0;
    for (int i = 0; i < n; i++) {
        nb = rand() % 100000 + 1;  // Generate random number between 1-100000
        this->addNumber(nb);  // Add number to Span

        if (i % 1000 == 0) {
            std::cout << "current size: " << this->actual_size << std::endl << "current randonly generated number " : " << nb << std::endl;
        }
    }
}













