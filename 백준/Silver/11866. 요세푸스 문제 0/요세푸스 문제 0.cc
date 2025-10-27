#include <iostream>
#include <queue>


using namespace std;


int main()
{
	int N, K;
	cin >> N >> K;

	queue<int> q;

	cout << "<";
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	while (q.size())
	{
		for (int i = 0; i < K-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1)
			cout << ", ";
		q.pop();
	}
	cout << ">";
}