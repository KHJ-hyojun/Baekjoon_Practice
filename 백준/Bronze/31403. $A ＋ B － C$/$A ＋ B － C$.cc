#include <iostream>
#include <string>

int main() {
	std::string a, b, c;

	//std::ios::sync_with_stdio(0), std::cin.tie(0);
	std::cin >> a >> b >> c;

	std::cout << std::stoi(a) + std::stoi(b) - std::stoi(c) << std::endl;
	std::cout << std::stoi(a + b) - std::stoi(c);
	
	
}