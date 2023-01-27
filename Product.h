#include<iostream>
#include <string>

struct DateAdded
{
	int day;
	int month;
	double year;
};

class Product
{
public:
	void putInfaile(std::string nameFaile, Product temp);
	void getInfaile();
	void listProduct(std::string nameFaile);
	void getData();
	bool checkForLetter(std::string express);
	bool checkDigit(std::string express);
private:
	DateAdded date;
	std::string typeOfproduct;
};