#include "Sales_item.h"

#include <iostream>

int main() {
	Sales_item current, input;
	if (std::cin >> current) {
		int count = 1;
		while (std::cin >> input) {
			if (input.isbn() == current.isbn()) {
				count++;
			}
			else {
				std::cout << count << " transactions with isbn of " << current.isbn() << std::endl;
				current = input;
				count = 1;
			}
		}
		std::cout << count << " transactions with isbn of " << current.isbn() << std::endl;
	}
	return 0;
}