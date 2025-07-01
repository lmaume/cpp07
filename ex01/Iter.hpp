#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>

template<typename Iter, typename Func>
void iter(Iter *array, size_t length, Func ft)
{
	size_t i = 0;
	while (i < length)
	{
		ft(array[i]);
		i++;
	}
	return ;
}

template<typename Iter>
void print_s(Iter& a)
{
	std::cout << a << "\n";
}

#endif