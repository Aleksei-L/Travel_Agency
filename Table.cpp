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
			if (cmp(*m[i], *m[j]) > 0)
				std::swap(m[i], m[j]);
		}
	}
}

// Поиск клиента в таблице, возвращает индекс найденного клиента или -1 если клиент не найден
int Search(const Client& tempClient) {
	for (int i = 0; i < size; i++) {
		if (equal(*m[i], tempClient))
			return i;
		}
	return -1;
	}


}
