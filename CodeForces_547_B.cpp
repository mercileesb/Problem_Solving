#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, i, hth, tmpRest = 0, maxRest = 0;
	vector<int> day,cpyDay;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> hth;
		day.push_back(hth);
		cpyDay.push_back(hth);
	}
	day.insert(day.end(), cpyDay.begin(), cpyDay.end());
	for (i = 0; i < day.size(); i++) { 
		if (day[i] == 1)
			tmpRest++;
		else {
			tmpRest = 0;
			continue;
		}
		maxRest = maxRest < tmpRest ? tmpRest : maxRest;
	}
	cout << maxRest;
	return 0;
}

