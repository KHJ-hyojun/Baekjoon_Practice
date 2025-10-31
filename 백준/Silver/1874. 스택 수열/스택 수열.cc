#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	stack<int> st;
	vector<char> vec;
	int cnt = 1;
	bool possible = true;
	

	for (int i = 1; i <= N;i++)
	{
		int target;
		cin >> target;

		while (cnt <= target)
		{
			st.push(cnt++);
			vec.push_back('+');
		}

		if (!st.empty() && st.top() == target)
		{
			st.pop();
			vec.push_back('-');
		}
		else
		{
			possible = false;
			break;
		}
	}
	if (possible)
	{
		for (char ch : vec)
			cout << ch << "\n";
	}
	else
	{
		cout << "NO\n";
	}
}