#include "Table.h"
#include <string.h>

int input(Client* c) {
	char buf[256];
	c->name = NULL;

	std::cout << "Enter client name: ";
	std::cin.getline(buf, 254, '\n');
	if (strlen(buf) == 0)
		std::cin.getline(buf, 254, '\n');
	c->name = new char[strlen(buf) + 1];
	strcpy_s(c->name, strlen(buf) + 1, buf);

	std::cout << "Enter city: ";
	std::cin.getline(c->city, 28, '\n');

	if (strlen(buf) == 0)
		std::cin.getline(c->city, 28, '\n');

	std::cout << "Enter phone: ";
	std::cin >> c->phone;

	std::cout << "Enter age: ";
	std::cin >> c->age;

	return !std::cin.eof();
}

void output(Client * c) {
	std::cout << "Client name: " << c->name << std::endl;
	std::cout << "City: " << c->city << std::endl;
	std::cout << "Phone: " << c->phone << std::endl;
	std::cout << "Age: " << c->age << std::endl;
}

int cmp(Client * a, Client * b) {
	int cond;
	if ((cond = strcmp(a->name, b->name)) != 0)
		return cond;
	else if ((cond = strcmp(a->city, b->city)) != 0)
		return cond;
	else if ((cond = a->phone - b->phone) != 0)
		return cond;
	else if ((cond = a->age - b->age) != 0)
		return cond;
	return 0;
}

int equal(Client * a, Client * b) {
	return !strcmp(a->name, b->name) && !strcmp(a->city, b->city) && (a->phone == b->phone) && (a->age == b->age);
}
