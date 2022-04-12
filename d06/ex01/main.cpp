#include <iostream>
#include <string>

//static cast doesn't allow to cast pointers

//reinterp brings undef if it works with references

struct Data {
	std::string content;
	double value;
	int n;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &os, Data &data) {
	os << "String Content: " << data.content << std::endl;
	os << "Double Value: " << data.value << std::endl;
	os << "Int n: " << data.n;
	return os;
}

int main() {
	Data data;
	data.content = "some string";
	data.value = 123.456;
	data.n = 10;

	std::cout << "Original address: " << &data << std::endl;
	std::cout << data << std::endl;

	// uintptr_t test = 10;
	uintptr_t ptr = serialize(&data);
	// ptr = test;
	Data *data2 = deserialize(ptr);
	std::cout << std::endl << "New address: " << data2 << std::endl;
	std::cout << *data2 << std::endl << std::endl;
	
	//check if final data struct is usable
	data2->content = "new string";
	data2->value = 42.21;
	data2->n = 21;
	std::cout << *data2 << std::endl;

}