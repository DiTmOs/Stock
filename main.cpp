#include "Product.h"

void main()
{
	std::string namefaile;
	Product test;
	test.getData();
	std::cout << "Enter name of faile: ";
	std::cin >> namefaile;
	test.putInfaile(namefaile, test);
}