#include <iostream>
#include <string>

int main() {
	int H, M;
	std::cin >> H >> M;

	if (M >= 45) {
		std::cout << H << " " << M - 45;
	}
	else if (H == 0) {
		std::cout << 23 << " " << M + 15;
	}
	else {
		std::cout << H - 1 << " " << M + 15;
	}
	
	
}