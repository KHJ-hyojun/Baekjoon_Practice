#include <iostream>

int main() {
	int n, x;
	std::cin >> n >> x;
	int arr[10000];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			std::cout << arr[i] << " ";
		}
	}
}