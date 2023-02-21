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
		std::cout << "3-: Editing a product?" << std::endl;
		std::cout << "5-:End" << std::endl;
		std::cin >> request;
		std::cout << "---------------------------------------------------" << std::endl;
		switch (request[0])
		{
		case '1':
			addProd();
			//one.inputStock(two);
			break;
		case '2':
			one.checkwareh(namefile);
			break;
		case '3':
			editing();
			break;
		case '5':
			break;
		default:
			std::cout << "The entered value is missing!" << std::endl;
			break;
		}
	} while (request != "5");
}
void Menu::addProd()
{
	std::string first, second,temp("Y");
	do {
		std::cout << "Enter the category: ";
		std::cin >> first;
		std::cout << "Enter its weight: ";
		std::cin >> second;
		two.getdate(first, second);
		std::cout << "Add more ? (Yes(Y) or Not(N))" << std::endl;
		std::cin >> temp;
	} while (temp != "N" && temp != "n");
	two.inputID();
	two.putInfile(namefile);
	two.clearmap();
}
void Menu::editing()
{
	int number;
	std::string zidedit,select, newperem;
	one.checkwareh(namefile);
	std::cout << "Which one(enter number ZID): ";
	std::cin >> zidedit;
	two = one.check(zidedit);
	std::cout << std::endl;
	two.getmap();
	std::cout << std::endl << "Select a category: ";
	std::cin >> select;
	std::cout << "What is chanding:" << std::endl;
	std::cout << "1) The category." << std::endl;
	std::cout << "2) The weight." << std::endl;
	std::cout << "3) All." << std::endl;
	std::cin >> number;
	std::cout << "Enter a new:";
	std::cin >> newperem;
	switch (number)
	{
	case 1:

		break;
	case 2:
		two.getdate(select, newperem);
		break;
	}
}