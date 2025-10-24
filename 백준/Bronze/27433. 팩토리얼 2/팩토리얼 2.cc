#include <iostream>

using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int result = 1;
    
    if (N == 0)
        cout << 1;
    else
    {
        for (long long int i = 1; i<=N ;i++)
        {
            result *= i;
        }
        cout << result;
    }
}
