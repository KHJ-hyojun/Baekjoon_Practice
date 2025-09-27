#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt = 0;

	while (true) {
		if (N % 5 == 0) {
			cnt += N / 5;
			cout << cnt;
			break;
		}
		N -= 3;
		cnt++;
		if (N < 0) {
			cout << -1;
			break;
		}
	}
	
}