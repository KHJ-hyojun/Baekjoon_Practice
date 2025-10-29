#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N, M;
		cin >> N >> M;
		int cnt = 0;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < N; i++)
		{
			int num;
			cin >> num;
			q.push({ i, num });
			pq.push(num);
		}

		while (!q.empty())
		{
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value)
			{
				pq.pop();
				++cnt;
				if (index == M)
				{
					cout << cnt << endl;
					break;
				}
			}
			else
				q.push({ index, value });

		}
	}
}