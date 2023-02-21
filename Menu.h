#include <iostream>
#include "Stock.h"

class Menu
{
public:
	void getnamefile();
	void menu();
	void addProd();
	void editing();
private:
	Stock one;
	Product two;
	std::string namefile;
};