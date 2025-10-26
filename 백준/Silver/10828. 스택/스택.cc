#include <iostream>
#include <string>
#include <stack>


using namespace std;


int main()
{
	int N;
	cin >> N;

	stack<int> st;

	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;

		// push X
		if (command == "push")
		{
			int num;
			cin >> num;

			st.push(num);
		}

		// pop
		else if (command == "pop")
		{
			if (!st.empty())
			{
				cout << st.top() << endl;;
				st.pop();
			}
			else
			{
				cout << -1 << endl;
			}
		}

		// size
		else if (command == "size")
		{
			cout << st.size() << endl;
		}

		// empty
		else if (command == "empty")
		{
			if (st.empty())
			{
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}

		else
		{
			if (!st.empty())
				cout << st.top() << endl;
			else
				cout << -1 << endl;
		}
	}
}