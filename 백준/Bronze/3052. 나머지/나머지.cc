#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
	int count[42] = {};
	int result = 0;

	for (int i = 0; i < 10; i++) {
		int v;
		cin >> v;
		count[v % 42]++;
	}

	for (int vv : count) {
		if (vv > 0) {
			result += 1;
		}
	}
	cout << result;
	


}