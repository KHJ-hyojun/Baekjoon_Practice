#include <iostream>
#include <string>


using namespace std;



int collecting(string col,int& star_pos) {
	int result = 0;
	for (int i = 0; i < 13; i++) {
		if (!isdigit(col[i])) {
			star_pos = i;
			continue;
		}
		else {
			if ((i+1) % 2 == 0)
				result += (col[i] - '0') * 3;
			else
				result += (col[i] - '0');
		}
	}
	return result;
}

int main() {
	string str;
	cin >> str;

	int star_pos = -1;

	int colct = collecting(str,star_pos);

	for (int i = 0; i < 10; i++) {
		
		int total = colct;
		if ((star_pos + 1) % 2 == 0)
			total += i * 3;
		else
			total += i;

		if (total % 10 == 0) {
			cout << i << "\n";
			break;
		}
	}
}