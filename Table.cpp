#include "Table.h"

const int size = 3;
Client* m[size];

// Ввод таблицы
int Input() {
	for (int i = 0; i < size; i++)
		m[i] = new Client;

	for (int i = 0; i < size; i++)
		input(m[i]);

	return 0;
}

// Вывод таблицы
void Output() {
	for (int i = 0; i < size; i++)
		output(m[i]);
}
