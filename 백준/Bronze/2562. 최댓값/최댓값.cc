#include <iostream>
#include <string>

int main() {
	int num;
	int count = 1, max = 0;

	for (int i = 1; i <= 9;i++) {
		std::cin >> num;
		if (num >= max) {
			max = num;
			count = i;
		}
	}
	std::cout << max << std::endl << count;
	
	
}