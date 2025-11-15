#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		string test;
		getline(cin, test);
		if (test == "#") break;

		int cnt = 0;

		for (int i = 0; i < test.size(); i++)
		{
			if (test[i] == 'a' || test[i] == 'e' || test[i] == 'i' || test[i] == 'o' || test[i] == 'u' ||
				test[i] == 'A' || test[i] == 'E' || test[i] == 'I' || test[i] == 'O' || test[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	}
}