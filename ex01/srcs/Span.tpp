template <typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end) {
    if (std::distance(begin, end) > static_cast<int>(input_maxSize - input_array.size())) {
        throw MaxNumbersException();
    }
    input_array.insert(input_array.end(), begin, end);
}
