#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>

template<class T>
class Array
{
	private:
		T*		_data;
		size_t	_size;
	public:
		Array& operator=(const Array& a)
		{
			if (this->_data != NULL)
				delete []this->_data;
			size_t i = 0;
			this->_size = a.size();
			this->_data = new T[a.size()];
			while (i < a.size())
			{
				this->_data[i] = a.getArray()[i];
 				i++;
			}
			return *this;
		}
		T&	operator[](size_t index)
		{
			if (index > this->_size || index < 0)
				throw (std::invalid_argument("Invalid index."));
			else
				return this->_data[index];
		}

		void	setArray(T data, size_t index)
		{
			this->_data[index] = data;
		}
		T*		getArray() const
		{
			T* tmp = this->_data;
			return tmp;
		}
		size_t	size() const
		{
			return this->_size;
		}



		Array()
		{
			this->_data = NULL;
			this->_size = 1;
		}
		Array(Array& copy)
		{
			Array tmp;
			tmp = copy;

			this->_data = new T[copy.size()];
			this->_size = copy.size();
			*this = tmp;
		}
		Array(unsigned int n)
		{
			this->_data = new T[n];
			this->_size = n;
		}
		~Array()
		{
			if (this->_data != NULL)
				delete []this->_data;
		}
};

#endif