#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, i, hth, tmpRest = 0, maxRest = 0;
	vector<int> day;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> hth;
		day.push_back(hth);
	}
	for (i = 0; i < n; i++) {
		int j = i; tmpRest = 0;
		if (1 == day[i]) {
			while (day[j++] == 1) {
				if (j > n - 1) j = 0;
				tmpRest++;
			}
		}
		maxRest = maxRest < tmpRest ? tmpRest : maxRest;
	}
	cout << maxRest;
	return 0;
}

