#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool checkMode(const vector<int>& v, int k) {
	for (int kk : v) {
		if (kk == k) return 1;
	}
	return false;
}

void check(const vector<int>& v, int k) {
	if (checkMode(v, k)) cout << "1\n";
	else cout << "0\n";
}

vector<int> FindIdx(vector<int>& v, int x) {
	vector<int> vv;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == x) vv.push_back(i);
	}
	return vv;
}

void add(vector<int>& v, int x) {
	if (!checkMode(v, x)) v.push_back(x);
}

int remove(vector<int>& v, int x) {
	vector<int> UsingIdx = FindIdx(v, x);
	sort(UsingIdx.rbegin(), UsingIdx.rend());

	for (int idx : UsingIdx) {
		v.erase(v.begin() + idx);
	}
	return (UsingIdx.size() > 0) ? 1 : 0;
}

void toggle(vector<int>& v, int x) {
	if (!remove(v, x)) {
		add(v, x);
	}
						
}

void all(vector<int>& v) {
	v = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
}

void empty(vector<int>& v) {
	v = {};
}


int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int N;
	cin >> N;

	vector<int> arr;

	for (int i = 0; i < N; i++) {
		string func;
		int Num;
		cin >> func;

		if (func == "add" || func == "remove" || func == "check" || func == "toggle") {
			cin >> Num;
		}

		if (func == "add") {
			add(arr, Num);
		}
		else if (func == "remove") {
			remove(arr, Num);
		}
		else if (func == "check") {
			check(arr, Num);
		}
		else if (func == "toggle") {
			toggle(arr, Num);
		}
		else if (func == "all"){
			all(arr);
		}
		else if (func == "empty"){
			empty(arr);
		}
	}
}