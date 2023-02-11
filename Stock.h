#include "Product.h"
#include <vector>

class Stock
{
public:
	void inputStock(Product input);
	void checkwareh(std::string namefile);
private:
	std::vector <Product> listObjects;
};
