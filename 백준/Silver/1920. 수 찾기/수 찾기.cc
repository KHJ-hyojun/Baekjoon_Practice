#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N;
	vector<long long int> arr1(N);

	for (int i = 0; i < N;i++) {
		cin >> arr1[i];
	}
	
	sort(arr1.begin(), arr1.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		long long value;
		cin >> value;

		if (binary_search(arr1.begin(), arr1.end(), value)) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
}