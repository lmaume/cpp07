#include "Array.hpp"

int main( void )
{
	std::string str = "Base message";
	Array<std::string> arr(4);

	arr.setArray(str, 0);
	arr.setArray("default soup", 1);

	//prints first arr block
	std::cout <<  "\033[1;33marr\033[0m\t:\t" << arr[0] << "\n\n";

	//creates 2 copy of arr
	Array<std::string> chili(arr);
	Array<std::string> copy;
	copy = arr;

	//prints adresses to show that assignment operator and copy constructor works as intended
	std::cout << "Displaying adresses of 'arr' and each copy.\n";

	std::cout << "\033[1;36mcopy\033[0m\tadress\t" << &copy << std::endl;
	std::cout << "\033[1;31mchili\033[0m\tadress\t" << &chili << std::endl;
	std::cout << "\033[1;33marr\033[0m\tadress\t" << &arr << "\n\n";

	copy.setArray("not soup", 1);
	chili.setArray("chili soup", 1);

	try
	{
		std::cout << "Accessing an invalid index of copy.\n";
		std::cout << "\033[1;36mcopy\033[0m\t:\t" << copy[12] << "\t| Invalid index attended.\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << '\n';

	//first test to show that every copy has its own instance and does not link data
	std::cout << "Displaying 'arr' and each copy data of the same index to show that they're not linked.\n";

	std::cout << "\033[1;36mcopy\033[0m\t:\t" << copy[1] << "\t| not soup attended.\n";
	std::cout << "\033[1;31mchili\033[0m\t:\t" << chili[1] << "\t| chili soup attended.\n";
	std::cout << "\033[1;33marr\033[0m\t:\t" << arr[1] << "\t| Default soup attended.\n\n";

	arr.setArray("onion soup", 1);

	//second test to prove that modifying arr does not modify the copy
	std::cout << "Displaying 'arr' and each copy data of the same index again after modifying 'arr' to show that they're not linked.\n";

	std::cout << "\033[1;36mcopy\033[0m\t:\t" << copy[1] << "\t| not soup attended.\n";
	std::cout << "\033[1;31mchili\033[0m\t:\t" << chili[1] << "\t| chili soup attended.\n";
	std::cout << "\033[1;33marr\033[0m\t:\t" << arr[1] << "\t| onion soup attended.\n\n";
}
