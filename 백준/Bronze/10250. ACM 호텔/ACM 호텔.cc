#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 1;
	int T, H, W, N;
	cin >> T;

	while (T > 0) {
		T--;
		cin >> H >> W >> N;
		cnt = 1;

		while (N > H) {
			N -= H;
			cnt += 1;

		
		}
		cout << N * 100 + cnt << endl;
	

	}
}