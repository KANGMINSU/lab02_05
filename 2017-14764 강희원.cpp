#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
int num = 0;

void main() {
	vector<int> numlist;
	while (cin >> num) {
		numlist.push_back(num);
	}

	sort(numlist.begin(), numlist.end(), greater<int>());
	
	for (auto i : numlist) {
		cout << i << endl;
	}
}
