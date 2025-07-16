#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<int> ac = { 1,2,3,4,5,6,7,8 };
	vector<int> dc = { 8,7,6,5,4,3,2,1 };
	vector<int> vec(8);

	for (int i = 0; i < 8; i++) {
		int a;
		cin >> a;
		vec[i] = a;
	}

	if (vec == ac) {
		cout << "ascending";
	}
	else if(vec == dc){
		cout << "descending";
	}
	else {
		cout << "mixed";
	}

}