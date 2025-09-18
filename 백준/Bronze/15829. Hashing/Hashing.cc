#include <iostream>
#include <string>


using namespace std;

int main() {
	const int r = 31;
	const int M = 1234567891;

	int L;
	cin >> L;

	string str;
	cin >> str;

	long long hash = 0;
	long long power = 1;

	for (int i = 0; i < L; i++) {
		int val = str[i] - 'a' + 1;
		hash = (hash + val * power) % M;
		power = (power * r) % M;
	}

	cout << hash;
}
