#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, result =0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a,kk = 0;
		cin >> a;

		if (a == 1)
			continue;
		for (int j = 1; j <= a; j++) {
			if (a % j == 0)
				kk += 1;
		}
		if (kk == 2) {
			result += 1;
		}
	}
	cout << result;
}