#include "Sales_item.h"

#include <iostream>

int main() {
	Sales_item sum;

	std::cin >> sum;

	for (Sales_item book; std::cin >> book; sum += book);

	std::cout << sum << std::endl;
}