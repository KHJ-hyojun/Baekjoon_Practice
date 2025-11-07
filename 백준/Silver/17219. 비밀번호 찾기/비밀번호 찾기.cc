#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	unordered_map<string, string> um;
	for (int i = 0; i < n; i++)
	{
		string front;
		string back;

		cin >> front >> back;

		um[front] = back;
	}

	for (int i = 0; i < m; i++)
	{
		string st;
		cin >> st;

		cout << um[st] << "\n";
	}

}