#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, cnt = 1, layer = 1;
	cin >> N;

	while (N > cnt) {
		cnt += 6 * layer;
		layer++;
		
	}

	cout << layer;
}