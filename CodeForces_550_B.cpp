#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,n_input,i, result = 0;
	vector<int> odds;
	vector<int> evens;
	cin >> n;
	for(i = 0; i< n; i++) {
		cin >> n_input;
		if (n_input % 2 == 0) evens.push_back(n_input);
		else odds.push_back(n_input);
	}
	sort(evens.begin(), evens.end());
	sort(odds.begin(), odds.end());
	int numgap = evens.size() - odds.size();
	if (numgap == 0 || numgap == 1 || numgap == -1) {
		result = 0;
	}
	else {
		if (numgap > 1) { //Evens are more
			evens[evens.size()-1] = 0;
			evens.erase(evens.end(), evens.end() - odds.size());
			for (auto n : evens) result += n;
		}
		else if (numgap < -1) { //Odds are more
			odds[odds.size() - 1] = 0;
			odds.erase(odds.end(), odds.end() - evens.size());
			for (auto n : odds) result += n;
		}
	}
	cout << result;
	return 0;
} //Wrong answer on test 5

