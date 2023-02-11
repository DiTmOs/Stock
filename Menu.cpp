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
	std::string request,first,second,temp("Y"),editing;
	do
	{
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "Enter the number of the desired action!" << std::endl;
		std::cout << "1-:Add a new product?" << std::endl;
		std::cout << "2-: Viev the warehouse?" << std::endl;
		std::cout << "3-: Editing a product?" << std::endl;
		std::cout << "5-:End" << std::endl;
		std::cin >> request;
		std::cout << "---------------------------------------------------" << std::endl;
		switch (request[0])
		{
		case '1':
			do
			{
				std::cout << "Enter the category: ";
				std::cin >> first;
				std::cout << "Enter its weight: ";
				std::cin >> second;
				two.getdate(first, second);
				std::cout << "Add more ? (Yes(Y) or Not(N))"<<std::endl;
				std::cin >> temp;
			} while (temp != "n" && temp != "N");
			two.inputID();
			two.putInfile(namefile);
			//one.inputStock(two);
			two.clearmap();
			break;
		case '2':
			one.checkwareh(namefile);
			break;
		case '3':
			one.checkwareh(namefile);
			std::cout << "Which one: ";
			std::cin >> editing;
			break;
		case '5':
			break;
		default:
			std::cout << "The entered value is missing!" << std::endl;
			break;
		}
	} while (request != "5");
}