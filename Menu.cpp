#include "Menu.h"
void Menu::getnamefile()
{
	std::cout << "Enter the file name:";
	std::cin >> namefile;
	namefile += ".txt";
}
void Menu::menu()
{
	getnamefile();
	std::cout << "---------------------------------------------------" << std::endl;
	std::string request;
	do
	{
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "Enter the number of the desired action!" << std::endl;
		std::cout << "1-:Add a new product?" << std::endl;
		std::cout << "2-: Viev the warehouse?" << std::endl;
		std::cout << "5-:End" << std::endl;
		std::cin >> request;
		std::cout << "---------------------------------------------------" << std::endl;
		switch (request[0])
		{
		case '1':
			one.addinfile(namefile);
			break;
		case '2':
			one.checkwareh(namefile);
		case '5':
			break;
		default:
			std::cout << "The entered value is missing!" << std::endl;
			break;
		}
	} while (request != "5");
}