#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cin >> s;

	int result[26]{};
	for (int i = 0; i < size(result); i++) {
		result[i] = -1;
	}

	for (int i = 0; i < size(s); i++) {
		if (result[s[i] - 97] == -1) {
			result[s[i] - 97] = i;
		}
	}
	for (int vv : result) {
		cout << vv << " ";
	}
}