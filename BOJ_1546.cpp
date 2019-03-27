#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	double score, avg, M = 0, sum = 0;
	vector<double> v_score;
	cin >> N;
	while (N--) {
		cin >> score;
		M = M < score ? score : M;
		v_score.push_back(score);
	}
	for (int i = 0; i < v_score.size(); i++) {
		v_score[i] = (v_score[i] / M) * 100.0;
		sum += v_score[i];
	}
	avg = sum / (double)v_score.size();
	cout << avg;
	return 0;
}
