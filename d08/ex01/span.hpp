#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm>
#include <vector>
#include <iostream>

class Span {
	public:
		
		Span();
		Span(unsigned int capacity);
		Span(const Span &rhs);
		~Span();

		Span &operator=(const Span &rhs);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();

		template <typename Iter>
		void addNumbers(Iter begin, Iter end){
			if (std::distance(begin, end) + array.size() > capacity){
				throw BadSizeException();
			}
			for (Iter it = begin; it != end; it++){
				array.push_back(*it);
			}
		}
		class OutOfBoundsException : public std::exception {
			public:
				const char *what() const throw();
		};
		class BadSizeException : public std::exception {
			public:
				const char *what() const throw();
		};
		
	private:
		unsigned int capacity;
		std::vector<int> array;

		void checkCapacity();

};

#endif
