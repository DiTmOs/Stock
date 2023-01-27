#include "Product.h"
#include <fstream>
#include <cctype>

void Product::putInfaile(std::string nameFaile, Product temp )
{
	std::ofstream fin;
	nameFaile += ".txt";
	fin.open(nameFaile,std::ios::app | std::ios::ate);
	fin << temp.typeOfproduct << " " << temp.date.day << " " << temp.date.month << " " << temp.date.year << std::endl;
	fin.close();
}
void Product::getData()
{
	std::string temp;
	std::cout <<"Enter type of product: ";
	std::cin >> typeOfproduct;
	if (checkForLetter(typeOfproduct))
	{
		std::cout << "Error!Enter type of product incorrect!" << std::endl;
		exit(1);
	}
	std::cout << "Enter day: ";
	std::cin >> temp;
	if (!checkDigit(temp))
		date.day = stoi(temp);
	else
	{
		std::cout << "Error! Enter day is not number!"<<std::endl;
		exit(1);
	}
	std::cout << "Enter month: ";
	std::cin >> temp;
	if (!checkDigit(temp))
		date.day = stoi(temp);
	else
	{
		std::cout << "Error! Enter month is not number!" << std::endl;
		exit(1);
	}
	std::cout << "Enter year: ";
	std::cin >> temp;
	if (!checkDigit(temp))
		date.day = stoi(temp);
	else
	{
		std::cout << "Error! Enter year is not number!" << std::endl;
		exit(1);
	}
	
}
bool Product::checkForLetter(std::string express)

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
}
