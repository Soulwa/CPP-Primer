#include <iostream>

int main() {

	int sum = 0;

	for (int i = 0; std::cin >> i; sum += i);

	std::cout << "total sum of input: " << sum << std::endl;
}