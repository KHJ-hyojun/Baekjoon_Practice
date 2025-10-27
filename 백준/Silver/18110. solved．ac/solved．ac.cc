#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0)
    {
		cout << 0;
        return 0;
    }
	
	vector<int> list(n);
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}

	sort(list.begin(), list.end());

	int t = static_cast<int>(round(n*0.15));
	int sum = 0;

	for (int i = t; i < n - t;i++)
		sum += list[i];
	
	double avg = static_cast<double>(sum) / (n - 2 * t);
	cout << static_cast<int>(round(avg));

}