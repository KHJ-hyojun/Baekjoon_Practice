#include <iostream>

int main() {
	int a, s, d, f, g;
	std::cin >> a >> s >> d >> f >> g;
	int k = a * a + s * s + d * d + f * f + g * g;
	std::cout << k % 10;

}