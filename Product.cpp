#include "Product.h"
#include <fstream>
#include <cctype>

void Product::putInfile()
{
	Product prod;
	std::string namefile;
	std::ofstream fin;
	getnamefile(namefile);
	getdate(prod);
	std::map<std::string, std::string>::iterator it = prod.specific.begin();
	fin.open(namefile,std::ios::app | std::ios::ate);
	for (it ; it != prod.specific.end(); it++)
	{
		fin <<it->first << ":" << it->second <<";";
	}
	fin << std::endl;
	fin.close();
	std::cout << "The recording has passed!" << std::endl;
}
void Product::getdate(Product &temp)
{
	std::string request,first,second;
	do
	{
		std::cout << "Enter a category:";
		std::cin >> first;
		std::cout << "Enter its value:";
		std::cin >> second;
		temp.specific[first] = second;
		std::cout << "Add another category?" << std::endl << "Yes(Y) or Not(N)" <<std::endl;
		std::cin >> request;
	} while (request != "N" && request != "n");
}
/*bool Product::checkForLetter(std::string express)

{
	int size = express.length();
	for (int i = 0; i < size; i++)
	{
		if (std::isdigit(express[i]))
			return true;
	}
	return false;
}
bool Product::checkDigit(std::string express)
{
	int size = express.length();
	for (int i = 0; i < size; i++)
	{
		if (std::isalpha(express[i]))
			return true;
	}
	return false;
}*/
void Product::menu()
{
	std::string request;
	do
	{
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "Enter the number of the desired action!" << std::endl;
		std::cout << "1-:Add a new product?" << std::endl;
		std::cin >> request;
		switch (request[0])
		{
		case '1':
			putInfile();
			break;
		default:
			std::cout << "The entered value is missing!" << std::endl;
			break;
		}
		std::cout << "Repeat?" << std::endl << "Yes(Y) or Not(N)?" << std::endl;
		std::cin >> request;
		std::cout << std::endl << std::endl;
	} while (request != "N" && request != "n");
}
void Product::getnamefile(std::string &namefile)
{
	std::cout << "Enter the file name:";
	std::cin >> namefile;
	namefile += ".txt";
}