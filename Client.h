#pragma once
#include <iostream>

struct Client {
	char* name; // ��� �������
	char city[30]; // ����� �������
	int phone; // ������� �������
	double age; // ������� �������
};

int input(Client* p);
void output(Client* p);
int cmp(Client* a, Client* b);
int equal(Client* a, Client* b);
typedef Client* T;
