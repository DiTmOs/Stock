#include "Product.h"
#include <fstream>
#include <cctype>

void Product::putInfile(std::string namefile)
{
	std::ofstream fin;
	getdate();
	std::map<std::string, std::string>::iterator it = specific.begin();
	fin.open(namefile,std::ios::app | std::ios::ate);
	for (it ; it != specific.end(); it++)
	{
		fin <<it->first << ":" << it->second <<";";
	}
	fin << std::endl;
	fin.close();
	std::cout << "The recording has passed!" << std::endl;
}
void Product::getdate()
{
	std::string request,first,second;
	do
	{
		std::cout << "Enter a category:";
		std::cin >> first;
		std::cout << "Enter its value:";
		std::cin >> second;
		specific[first] = second;
		std::cout << std::endl << "Add another category?" << std::endl << "Yes(Y) or Not(N)" <<std::endl;
		std::cin >> request;
	} while (request != "N" && request != "n");
}
void Product::readline(std::string line)
{
	int n(1);
	std::string first(""), second("");
	for (int i = 0; i < line.length(); i++)
	{
		switch (line[i])
		{
		case ':':
			n = 2;
			++i;
			break;
		case ';':
			n = 1;
			specific[first] = second;
			first.clear();
			second.clear();
			++i;
			break;
		}
		if (n == 1 && i < line.length())
		{
			first += line[i];
		}
		else if (n == 2 && i < line.length())
		{
			second += line[i];
		}
	}
}
void Product::clearmap()
{
	specific.clear();
}
void Product::getmap()
{
	std::map<std::string, std::string >::iterator it;
	for (it = specific.begin(); it != specific.end(); it++)
	{
		std::cout<< it->first << "(" << it->second << ")" << " | ";
	}
	std::cout << std::endl;
}