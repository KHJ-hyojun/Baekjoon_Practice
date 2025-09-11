#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<double> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	double maxVal = 0;
	for (int i = 0; i < N; i++) {
		if (maxVal <= arr[i]) maxVal = arr[i];
	}

	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] * 100 / maxVal;
	}

	double avg = 0;
	for (int i = 0; i < N; i++) {
		avg += arr[i];
	}
	avg /= N;
	cout << avg;

}
