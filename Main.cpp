#include "Table.h"

int main() {

	Input();
	std::cout << std::endl;
	Sort();
	std::cout << std::endl;
	Output();
	std::cout << std::endl;

	std::cout << "Enter client for search: " << std::endl;
	Client searchClient;
	input(&searchClient);

	std::cout << "Search returns: " << Search(searchClient) << std::endl;

	return 0;
}
