#include<iostream>
#include <string>
#include <map>

class Product
{
public:
	void putInfile(std::string namefile);
	void getdate(std::string first, std::string second);
	void readline(std::string line);
	void clearmap();
	void getmap();
	void inputID();
private:
	std::map<std::string, std::string> specific;
};