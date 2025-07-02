#include <iostream>

int main() {
	int N;
	std::cin >> N;
	while (N > 0) {
		int a, b;
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
		N--;
	}
}