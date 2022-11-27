#include "Table.h"

int main() {
	Input();
	std::cout << std::endl;
	Sort();
	std::cout << std::endl;
	Output();
	std::cout << std::endl;

	std::cout << "Enter client for remove:" << std::endl;
	Client tmpClient;
	input(&tmpClient);

	Remove(tmpClient);

	std::cout << std::endl;
	Output();

	return 0;
}
