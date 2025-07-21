#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, t, p;
	int arr[6]{};
	int tshirts = 0;
	int pen = 0;

	cin >> n;
	for (int i = 0; i < 6; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}

	cin >> t >> p;

	for (int i = 0; i < 6; i++) {
		tshirts += (arr[i] + t - 1) / t;
	}
	cout << tshirts << endl;

	pen = n / p;
	cout << pen << " " << n%p;


}