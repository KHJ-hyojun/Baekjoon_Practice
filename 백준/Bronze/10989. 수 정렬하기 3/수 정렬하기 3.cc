#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	int arr[10001] = { 0 };
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++) {
		while (arr[i]--) {
			cout << i << "\n";
		}
	}
	
}
