#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>

template<typename Whatever>
Whatever min(Whatever a, Whatever b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename Whatever>
Whatever max(Whatever a, Whatever b)
{
	if (a > b)
		return a;
	else
		return b;
}

template<typename Whatever>
void swap(Whatever &a, Whatever &b)
{
	Whatever temp = a;
	a = b;
	b = temp;
}

#endif