#include <iostream>
#include <string>

using namespace std;

int main() {

	int count[10] = {};
	int a, b, c;

	cin >> a >> b >> c;
	
	int num = a * b * c;
	
	while (num != 0) {
		count[num % 10]++;
		num /= 10;
	}

	for (int v : count) {
		cout << v << endl;

	}

}