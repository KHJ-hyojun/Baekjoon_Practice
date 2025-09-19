#include <iostream>
#include <string>


using namespace std;

int addmin(int a, int b) {
	if (a / 2 < b) b = a - b;
	return 0;
}

int cal(int a, int b) {
	int mother = 1;
	int son = 1;
	if (b == 0) return 1;
	else {
		int kk = a;
		for (int i = 1; i <= b; i++) {
			mother *= kk;
			son *= i;
			kk--;
		}
	}
	return mother / son;
}

int main() {
	int N, K;
	cin >> N >> K;
	addmin(N, K);
	cout << cal(N, K);
}
