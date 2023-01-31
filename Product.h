#include<iostream>
#include <string>
#include <map>

class Product
{
public:
	void putInfile(std::string namefile);
	void getdate();
	void readline(std::string line);
	void clearmap();
	void getmap();
private:
	std::map<std::string, std::string> specific;
};