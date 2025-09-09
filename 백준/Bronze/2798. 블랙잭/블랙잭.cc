#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int card;
	int maxnum = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				card = arr[i] + arr[j] + arr[k];
				if (card <= M && maxnum <= card) maxnum = card;
			}
		}
	}
	cout << maxnum;
}
