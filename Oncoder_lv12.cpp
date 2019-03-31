#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<string> stats;
	string str; double one_rate,min = 9999;
	int j = 0, one_count=0, minIdx = 0;
	for (int i = 0; i <3; i++) {
		getline(cin, str);
		stats.push_back(str);
	}

	for (int i = stats.size()-1; i >= 0; i--) {
		while (stats[i][j] != '\0') {
			if(stats[i][j] == '1')
				one_count++;
			j++;
		}
		one_rate = (double)one_count / (double)stats[i].size();
		if (min >= one_rate) {
			min = one_rate;
			minIdx = i;
		}
		one_count = 0; j = 0;
	}
	cout << minIdx;
	return 0;
}

