#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, max, min;
	int num;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> num;
		if (i == 0)
			max = num, min = num;

		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
	}

	std::cout << min << " " << max;
}