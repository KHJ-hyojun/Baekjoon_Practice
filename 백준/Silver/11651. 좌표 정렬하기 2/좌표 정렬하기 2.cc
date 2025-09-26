#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmd(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second) {
		return a.first <  b.first;
	}
	return a.second < b.second;
}

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> dot_v(N);

	for (int i = 0; i < N; i++) {
		cin >> dot_v[i].first >> dot_v[i].second;
	}

	sort(dot_v.begin(), dot_v.end(), cmd);
	
	for (int i = 0; i < N; i++) {
		cout << dot_v[i].first << " " << dot_v[i].second << "\n";
	}
}