#include <iostream>

int main() {
	std::cout << "Enter 2 numbers: " << std::endl;
	int no1 = 0, no2 = 0;
	std::cin >> no1 >> no2;
	std::cout << "The product of " << no1 << " and " << no2
				<< " is " << no1 * no2 << std::endl;
}