#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	vector<int> score(n,0);

	for (int i = 0;i < n; i++)
	{
		cin >> arr[i];
	}

	score[0] = arr[0];
	score[1] = arr[0] + arr[1];
	score[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
	
	for (int i = 2; i < n; i++)
		score[i] = max(score[i - 2], score[i - 3] + arr[i - 1]) + arr[i];

	cout << score[n - 1] << "\n";
}