#include <iostream>
#include <string>

int main() {
	int N, sum = 0;
	std::string num;

	std::cin >> N >> num;

	for (int i = 0; i < N; i++) {
		sum += num[i] - '0';
	}

	std::cout << sum << std::endl;


}