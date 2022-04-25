#include "Span.hpp"

int main()
{
	{	//SUBJ TEST
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

		// CHECK "ARRAY CAPACITY" EXCEPTION
		try {
			sp.addNumber(12);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl << std::endl;
		}
	}

	// CHECK "SIZE FOR SEARCH SPAN" EXCEPTION
	{	
		Span b(1);
		b.addNumber(1);
		try {
			b.longestSpan();
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl << std::endl;
		}
	}

	// CHECK ADD NUMBERS FUNC
	{
		Span sp(100000);
		std::vector<int> v;

		for (int i = 0; i < 100000; i++)		
			v.push_back(i);

		sp.addNumbers(v.begin(), v.end());
		std::cout << "shortest span " << sp.shortestSpan() << std::endl;
		std::cout << "longest span " << sp.longestSpan() << std::endl;
	}

	return 0;
}
