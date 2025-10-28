#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;


	for (int i = N; i <= M;i++)
	{

		if (i == 1) continue;
		bool flag = 0;
		for (int j = 2; j * j <= i;j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
			
		}
		if (flag == 0)
			cout << i << endl;
	}
}