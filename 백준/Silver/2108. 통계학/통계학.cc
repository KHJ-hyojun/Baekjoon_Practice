#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int sum(const vector<int>& vec)
{
	long long result = 0;
	for (int num : vec)
		result += num;
	long long r = llround((double)result / (double)vec.size());
	return (int)r;
}

int center(vector<int> vec)
{
	sort(vec.begin(), vec.end());
	return vec[vec.size() / 2];
}

int most_ex(const vector<int>& vec)
{
	map<int, int> freq;

	for (int num : vec)
		freq[num]++;

	int max_freq = 0;
	for (auto& p : freq)
		max_freq = max(max_freq, p.second);

	vector<int> candidates;
	for (auto& p : freq)
		if (p.second == max_freq)
			candidates.push_back(p.first);

	sort(candidates.begin(), candidates.end());

	if (candidates.size() > 1)
		return candidates[1];
	else
		return candidates[0];
}

int range_vec(const vector<int>& vec)
{
	int max_v = *max_element(vec.begin(), vec.end());
	int min_v = *min_element(vec.begin(), vec.end());

	return max_v - min_v;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> vv(N);
	for (int i = 0; i < N; i++)
	{
		cin >> vv[i];
	}

	cout << sum(vv) << "\n" 
		<< center(vv) << "\n" 
		<< most_ex(vv) << "\n" 
		<< range_vec(vv) << "\n";
}