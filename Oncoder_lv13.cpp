#include <iostream>
#include <vector>

int num[1001];
using namespace std;
vector<int> solution(vector<int> sequence) {
	vector<int> newSeq;
	int _count = 0;
	for (auto s : sequence) {
		num[s]++;
	}

	for (int i = 0; i < 1001; i++) {
		if (num[i] > 1) {
			for (int j = sequence.size() - 1; j >= 0; j--) {
				if (i == sequence[j]) _count++;
				if (i == sequence[j] && _count > 1) sequence[j] = 0;
			}
		}
		_count = 0;
	}

	for (auto s : sequence) {
		if (s > 0) {
			newSeq.push_back(s);
		}
	}
	return newSeq;
}

int main() {
	for (auto n : solution({ 100,100,100,99,99,99,100,100,100 })) {
		cout << n << ' ';
	}
	return 0;
}
