#include "Array.hpp"

int main( void )
{
	// int* a = new int(4);
	// std::cout << *a;

	std::string str = "Base message";
	Array<std::string>* arr = new Array<std::string>(4);
	arr->setArray(str, 0);
	std::cout << arr->getArray()[0] << "\n\n";
	arr->setArray("default soup", 1);

	
	//TODO :  FIX COPY CONSTRUCTOR

	Array<std::string> copy;
	copy = *arr;
	
	Array<std::string>* chili(&copy);

	std::cout << "\033[1;36mcopy\033[0m adress " << &copy << std::endl;
	std::cout << "\033[1;31mchili\033[0m adress " << &chili << std::endl;
	std::cout << "\033[1;33marr\033[0m adress " << arr << "\n\n";

	copy.setArray("not soup", 1);
	chili->setArray("chili", 1);


	std::cout << "\033[1;36mcopy\033[0m : " << copy[1] << " | not soup attended.\n";
	std::cout << "\033[1;31mchili\033[0m : " << chili[1] << " | chili attended.\n";
	std::cout << "\033[1;33marr\033[0m :  " << arr[1] << " | Default soup attended.\n\n\n";

	arr->setArray("onion soup", 1);

	std::cout << "\033[1;36mcopy\033[0m : " << copy.getArray()[1] << " | not soup attended.\n";
	std::cout << "\033[1;31mchili\033[0m : " << chili->getArray()[1] << " | chili attended.\n";
	std::cout << "\033[1;33marr\033[0m :  " << arr->getArray()[1] << " | onion soup attended.\n\n";

	// delete copy;
	delete arr;
}
