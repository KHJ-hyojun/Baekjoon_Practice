#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n)
	{
		string a = "";
		for (int i = 0; i < n; i++)
			a += "*";

		cout << a << "\n";
		n--;
	}
}