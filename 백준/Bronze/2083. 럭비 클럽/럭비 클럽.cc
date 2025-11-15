#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		string name;
		int n, k;
		cin >> name >> n >> k;

		if (name == "#" && n == 0 && k == 0) break;

		string sj;

		if (n > 17 || k >= 80)
			sj = "Senior";
		else
			sj = "Junior";

		cout << name << " " << sj << "\n";
	}
}