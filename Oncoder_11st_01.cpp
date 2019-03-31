#include <iostream>
#include <vector>
//¸øÇ° ¤Ð¤Ð
using namespace std;
//Time Complexity O(n^2)
//Space Complexity O(1)
int N;
double sum_error = 0;
double min_sum = 9999;
double solution(vector<int> &cv, vector<int> &dw) {
	vector<double> denv;
	for (int i = 0; i < N; i++) {
		denv.push_back((double)dw[i] / (double)cv[i]);
	}
	
	for (int i = 0; i < N; i++) {
		sum_error = 0;
		for (int j = 0; j < N; j++) {
			sum_error += abs(dw[j] - (denv[i] * cv[j]));
		}
		min_sum = min_sum > sum_error ? sum_error : min_sum;
	}
	return min_sum;
}
int main() {
	int volume, weight;
	vector<int> cv;
	vector<int> dw;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> volume;
		cv.push_back(volume);
	}
	for (int i = 0; i < N; i++) {
		cin >> weight;
		dw.push_back(weight);
	}
	cout << solution(cv, dw);
	return 0;
}
