#include <iostream>
#include <string>
#include <queue>


using namespace std;


int main()
{
	int N;
	cin >> N;

	queue<int> qq;

	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;

		// push X
		if (command == "push")
		{
			int num;
			cin >> num;

			qq.push(num);
		}

		// pop
		else if (command == "pop")
		{
			if (!qq.empty())
			{
				cout << qq.front() << endl;;
				qq.pop();
			}
			else
			{
				cout << -1 << endl;
			}
		}

		// size
		else if (command == "size")
		{
			cout << qq.size() << endl;
		}

		// empty
		else if (command == "empty")
		{
			if (qq.empty())
			{
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}

		// front
		else if (command == "front")
		{
			if (!qq.empty())
				cout << qq.front() << endl;
			else
				cout << -1 << endl;
		}

		// back
		else
		{
			if (!qq.empty())
				cout << qq.back() << endl;
			else
				cout << -1 << endl;
		}
	}
}