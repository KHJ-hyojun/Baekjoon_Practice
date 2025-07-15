#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, r;
	string s;

	cin >> t;

	while (t > 0) {
		t--;
		cin >> r >> s;
		string result = "";

		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < r; j++) {
				result += s[i];
			}
		}
		
		cout << result << endl;
			
	}

}