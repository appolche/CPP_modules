#include "Span.hpp"

Span::Span() {
	this->capacity = 0;
}

Span::Span(unsigned int capacity) {
	this->capacity = capacity;
	array.reserve(capacity);
}

Span::Span(const Span &rhs) {
	if (this != &rhs) {
		capacity = rhs.capacity;
		array.reserve(capacity);

		for (size_t i = 0; i < rhs.array.size(); i++) {
			array.push_back(rhs.array[i]);
		}
	}
}

Span::~Span() {}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		capacity = rhs.capacity;
		array.reserve(capacity);

		for (size_t i = 0; i < rhs.array.size(); ++i) {
			array.push_back(rhs.array[i]);
			std::cout << array[i] << std::endl;
		}
	}
	return *this;
}

void Span::addNumber(int number) {
	if (array.size() == static_cast<size_t>(capacity)) {
		throw OutOfBoundsException();
	}
		array.push_back(number);
}

int Span::shortestSpan() {
	checkCapacity();

	std::sort(array.begin(), array.end());

	std::vector<int>::iterator it = array.begin();
	int shortestSpan = *(it + 1) - *it;

	for (; (it + 1) != array.end(); ++it) {
		if ( *(it + 1) - *it < shortestSpan) {
			shortestSpan = *(it + 1) - *it;
		}
	}
	
	return shortestSpan;
}

int Span::longestSpan() {
	checkCapacity();
	
	int min = *std::min_element(array.begin(), array.end());
	int max = *std::max_element(array.begin(), array.end());
	
	return (max - min);
}

void Span::checkCapacity() {
	if (array.size() == 1 || array.empty()){
		throw BadSizeException();
	}
}

const char *Span::OutOfBoundsException::what() const throw() {
	return "The array is full! You can't add any numbers!";
}

const char *Span::BadSizeException::what() const throw() {
	return "Bad array size for searching span!";
}