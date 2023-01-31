#include "Product.h"
#include <vector>

class Stock
{
public:
	void addinfile(std::string namefile);
	void checkwareh(std::string namefile);
private:
	std::vector <Product> listObjects;
};
