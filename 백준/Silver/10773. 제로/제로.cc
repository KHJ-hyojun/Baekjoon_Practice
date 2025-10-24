#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int cnt;
	cin >> cnt;

	stack<int> st;
;	for (int i = 0; i < cnt; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
			st.pop();
		else
		{
			st.push(num);
		}
	}
	int result = 0;
	while (!st.empty())
	{
		result += st.top();
		st.pop();
	}
	cout << result;
}