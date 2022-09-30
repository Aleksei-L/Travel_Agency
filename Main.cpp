#include "Table.h"

int main() {
	Input();
	std::cout << std::endl;
	Sort();
	std::cout << std::endl;
	Output();
	std::cout << std::endl;

	std::cout << "Enter client for remove: " << std::endl;
	Client badClient;
	input(&badClient);

	Remove(badClient);

	std::cout << std::endl;
	Output();

	return 0;
}
