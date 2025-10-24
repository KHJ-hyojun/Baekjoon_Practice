#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N)
	{
		N--;
		string s;
		cin >> s;

		stack<char> c;
		bool flag = 0;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
				c.push(s[i]);
			else
			{
				if (!c.empty() && c.top() == '(')
				{
					c.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}

		if (c.empty() && flag == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}