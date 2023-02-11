#include "Stock.h"
#include <fstream>
#include <iostream>


void Stock::checkwareh(std::string namefile)
{
	Product temp;
	std::string s;
	std::ifstream in;
	in.open(namefile);
	if (in.is_open())
	{
		do
		{
			getline(in, s);
			temp.readline(s);
			listObjects.push_back(temp);
			temp.clearmap();
		} while (!in.eof());
	}
	for (int i = 0; i < listObjects.size(); i++)
	{
		listObjects[i].getmap();
	}
}
void Stock::inputStock(Product input)
{
	listObjects.push_back(input);
}
