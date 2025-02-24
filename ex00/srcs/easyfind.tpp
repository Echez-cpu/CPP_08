template <typename T>
typename T::iterator easyfind(T  &arr, int value) {
    typename T::iterator it = std::find(arr.begin(), arr.end(), value);
    if (it == arr.end()) {
        throw NoValueException();
}
    return it;
}


const char *	NoValueException::what() const throw() {
	return "No occurrence found in the container.";
}
