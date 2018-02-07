#include <iostream>

int main() {
	int in_val = 0, curr_val = 0;

	if (std::cin >> curr_val) {
		int count = 1;
		while (std::cin >> in_val) {
			if (in_val == curr_val) {
				count++;
			}
			else {
				std::cout << curr_val << " occurs " << count << (count == 1 ? " time." : " times.")
				 << std::endl;
				curr_val = in_val;
				count = 1;
			}
		}
		std::cout << curr_val << " occurs " << count << (count == 1 ? " time." : " times.")
		 << std::endl;
	}
	return 0;
}