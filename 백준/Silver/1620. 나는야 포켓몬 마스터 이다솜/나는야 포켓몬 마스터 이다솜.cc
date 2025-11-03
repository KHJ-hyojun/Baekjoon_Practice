#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> numToname(n);
	unordered_map<string, int> nameTonum;

	for (int i = 0; i < n; i++)
	{
		cin >> numToname[i];
		nameTonum[numToname[i]] = i + 1;
		
	}

	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;

		if (isdigit(input[0]))
		{
			int num = stoi(input);
			cout << numToname[num - 1] << "\n";
		}
		else
			cout << nameTonum[input] << "\n";
	}
}