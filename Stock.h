#include "Product.h"
#include <vector>

class Stock
{
public:
	void inputStock(Product input);
	void checkwareh(std::string namefile);
	void clearStock();
	Product check(std::string nameZID);
private:
	std::vector <Product> listObjects;
};
