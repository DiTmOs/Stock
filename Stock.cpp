#include "Stock.h"
#include <fstream>
#include <iostream>


void Stock::checkwareh(std::string namefile)
{
	Product temp;
	std::string s;
	std::ifstream in;
	clearStock();
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
void Stock::clearStock()
{
	if (!listObjects.empty())
		listObjects.clear();
}
//Вопрос: что возврашать, если указанный зид не пресутсвует?
Product Stock::check(std::string nameZID)
{
	for (int i = 0; i != listObjects.size(); i++)
	{
		if (listObjects[i].checkZID(nameZID))
			return listObjects[i];
	}
}
