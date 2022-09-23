#include "Table.h"

int Input() {
	for (int i = 0; i < size; i++) {
		m[i] = new Client;
	}

	for (int i = 0; i < size; i++)
		input(m[i]);

	return 0;
}

void Output() {
	for (int i = 0; i < size; i++)
		output(m[i]);
}
