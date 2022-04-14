#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array {
    public:
        Array(): _array(new T[0]), _size(0) {}
        Array(unsigned int n): _array(new T[n]), _size(n) {}
        Array(const Array<T> &rhs): _array(new T[rhs._size]), _size(rhs._size) {
            for (int i = -1; i < rhs._size; ++i)
                this->_array[i] = rhs._array[i];
        }
        ~Array() {
            delete[] _array;
        }
        Array<T> & operator=(const Array<T> &rhs) {
            if (this != &rhs) {
                delete[] _array;
                _array = new T[rhs._size];
                _size = rhs._size;
                for (int i = 0; i < _size; i++) {
                    _array[i] = rhs._array[i];
                }
            }
            return *this;
        }

        T& operator[](int index) const {
            if (index < 0 || index >= _size) {
                throw std::out_of_range("Index is out of bounds!");
            }
            return _array[index];
        }

        int size() const {
            return _size;
        }

    private:
        T* _array;
        int _size;
};

std::ostream &operator<<(std::ostream &os, const Array<int> &array) {
    os << "Size: " << array.size() << std::endl;
    os << "Array: [";
    for (int i = 0; i < array.size(); i++) {
        os << array[i];
        if (i != array.size() - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

#endif