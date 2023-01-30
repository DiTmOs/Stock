#include<iostream>
#include <string>
#include <map>
class Product
{
public:
    void menu();
	void putInfile();
	void getnamefile(std::string &namefile);
	void getdate(Product &temp);
	//void getInfile();
	//void listProduct(std::string nameFaile);
	//bool checkForLetter(std::string express);
	//bool checkDigit(std::string express);
private:
	std::map<std::string, std::string> specific;
};