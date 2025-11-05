#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	stack<int> st;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;

		st.push(k);

	}

	int cnt = 0;

	while (!st.empty())
	{
		if (st.top() <= m)
		{
			cnt++;
			m -= st.top();
			if (m == 0) break;
		}
		else
			st.pop();
	}
	cout << cnt;
}