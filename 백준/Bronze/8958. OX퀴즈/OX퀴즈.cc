#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
	int result = 0,t;
	string oh;

	cin >> t;
	while (t > 0) {
		t--;
		int plus = 1;
		cin >> oh;
		for (int i = 0; i < oh.length();i++) {
			if (oh[i] == 'X') {
				plus = 1;
			}
			else {
				result += plus;
				plus++;
			}
		}
		cout << result << endl;
		result = 0;



	}
    
}