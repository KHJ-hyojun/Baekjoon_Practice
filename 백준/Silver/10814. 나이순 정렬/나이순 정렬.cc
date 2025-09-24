#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
	return a.first < b.first;
}


int main() {
	int N;
	cin >> N;

	vector<pair<int, string>> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	stable_sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}