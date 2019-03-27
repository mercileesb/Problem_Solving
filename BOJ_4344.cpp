#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int C, N, overAvg = 0;
	double score, avg, rate;
	vector<double> vScore;
	cin >> C;
	cout << fixed;
	cout.precision(3);
	while (C--) {
		cin >> N;
		overAvg = 0; vScore.clear();
		while (N--) {
			cin >> score;
			vScore.push_back(score);
		}
		avg = accumulate(vScore.begin(), vScore.end(), 0.0) / (double)vScore.size();
		for (auto &s : vScore) {
			if (s > avg) overAvg++;
		}
		rate = ((double)overAvg / (double)vScore.size()) * 100.0;
		cout << rate << '%' << '\n';
	}
	return 0;
}
