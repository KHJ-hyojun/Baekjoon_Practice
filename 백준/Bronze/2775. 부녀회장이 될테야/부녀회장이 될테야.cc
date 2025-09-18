#include <iostream>
#include <string>


using namespace std;


int main() {
	int T;
	int arr[15][15];

	cin >> T;

	while (T--) {
		int k, n;
		cin >> k >> n;

		for (int i = 0; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 0) {
					arr[i][j] = j;
				}
				else if(j == 1){
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
				}
			}
		}
		cout << arr[k][n] << "\n";
	}

	
}