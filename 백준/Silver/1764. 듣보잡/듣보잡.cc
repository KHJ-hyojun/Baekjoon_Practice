#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>


using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	unordered_set<string> known;
	vector<string> unknown;


	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		known.insert(s);
	}

	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if (known.count(s)) unknown.push_back(s);
	}

	sort(unknown.begin(), unknown.end());
	cout << unknown.size() << "\n";

	for (string str : unknown)
		cout << str << "\n";
}