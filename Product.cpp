#include "Product.h"
#include <fstream>
#include <cctype>
#include <ctime>


void Product::putInfile(std::string namefile)
{
	std::ofstream fin;
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
void Product::getdate(std::string first, std::string second)
{
	specific[first] = second;
}
void Product::inputID()
{
	double temp;
	temp = rand();
	std::string number = std::to_string(temp);
	srand(time(NULL));
	specific["Zid"] = number;
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