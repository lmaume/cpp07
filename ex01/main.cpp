#include "Iter.hpp"

int main( void )
{
	
	std::string cstr[] = {"const coucou", "const pas coucou", "const evil coucou"};
	std::string str[] = {"coucou", "pas coucou", "evil coucou"};
	int s[] = {1, 4, 6};
	::iter(cstr, 3, print_s<std::string const>);
	::iter(str, 3, print_s<std::string>);
	::iter(s, 3, print_s<int>);
}