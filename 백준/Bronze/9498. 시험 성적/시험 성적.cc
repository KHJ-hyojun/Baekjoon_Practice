#include <iostream>

int main() {
	int N;
	std::cin >> N;
	if (N > 89) {
		std::cout << "A";
	}
	else if (N >79) {
		std::cout << "B";
	}
	else if (N > 69) {
		std::cout << "C";
	}
	else if (N > 59) {
		std::cout << "D";
	}
	else {
		std::cout << "F";
	}
}