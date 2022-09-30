#pragma once
#include <iostream>

struct Client {
	char* name; // Имя клиента
	char city[30]; // Адрес клиента
	int phone; // Телефон клиента
	double age; // Возраст клиента
};

int input(Client* p);
void output(Client* p);
int cmp(const Client& a, const Client& b);
int equal(const Client& a, const Client& b);
typedef Client* T;
