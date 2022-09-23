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
int cmp(Client* a, Client* b);
int equal(Client* a, Client* b);
//typedef Client* T;
