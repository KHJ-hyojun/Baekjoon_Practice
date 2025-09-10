#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	while (1) {
		bool palindrome = 1;
		string num;
		cin >> num;
		if (num == "0") break;

		int block = num.length() / 2 ;
		int cnt = num.length();

		for (int i = 0; i < block; i++) {
			if (num[i] != num[cnt-1-i]) {
				palindrome = 0;
				break;
			}
		}
		if (palindrome) cout << "yes\n";
		else cout << "no\n";
	}
}