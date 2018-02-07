#include <iostream>

int main() {
	std::cout << "input 2 numbers to find a range between: " << std::endl;

	int bound1 = 0, bound2 = 0;
	std::cin >> bound1 >> bound2;

	if (bound1 > bound2) {
		std::cout << "not suitable numbers to find a range between." << std::endl;
	}

	else {
		while (bound1 <= bound2) {
			std::cout << bound1 << std::endl;
			bound1++;
		}

		std::cout << "no more numbers between them!" << std::endl;

	}

}