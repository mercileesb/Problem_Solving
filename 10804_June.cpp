#include <iostream>
using namespace std;

int card[20];
void Reverse(int lIdx, int rIdx) {
	int mid = (rIdx - lIdx) / 2;
	int temp;
	for (int i = 0; i <= mid; i++, lIdx++, rIdx--) {
		temp = card[lIdx];
		card[lIdx] = card[rIdx];
		card[rIdx] = temp;
	}
}
int main() {
	int i = 0, T = 10;
	int left, right;
	for (auto &n : card) {
		n = ++i;
	}
	while (T--) {
		cin >> left >> right; //Index: left-1, right-1.
		int lIdx = left - 1; int rIdx = right - 1;
		Reverse(lIdx,rIdx);
	}

	for (auto n : card) {
		cout << n << ' ';
	}
	return 0;
}