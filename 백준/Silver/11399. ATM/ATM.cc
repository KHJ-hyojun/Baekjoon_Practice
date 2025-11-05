#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += vec[i - 1] * (n + 1 - i);
	}

	cout << result;
}