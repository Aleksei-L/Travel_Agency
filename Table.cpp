#include <algorithm>
#include "Table.h"

const int size = 10;
T m[size];

// Ввод таблицы
int Input() {
	for (int i = 0; i < size; i++)
		m[i] = new Client;

	for (int i = 0; i < size; i++)
		input(m[i]);

	return !std::cin.eof();
}

// Вывод таблицы
void Output() {
	for (int i = 0; i < size; i++)
		output(m[i]);
}

// Сортировка таблицы
void Sort() {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (strcmp(m[i]->name, m[j]->name) > 0)
				std::swap(m[i], m[j]);
			else if (strcmp(m[i]->city, m[j]->city) > 0)
				std::swap(m[i], m[j]);
			else if (m[i]->phone > m[j]->phone)
				std::swap(m[i], m[j]);
			else if (m[i]->age > m[j]->age)
				std::swap(m[i], m[j]);
		}
	}
}
