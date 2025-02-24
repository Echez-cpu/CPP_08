template <typename T>
typename T::iterator easyfind(T  &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw NoValueException();
}
    return it;
}


const char *	NoValueException::what() const throw() {
	return "No occurrence found in the container.";
}
