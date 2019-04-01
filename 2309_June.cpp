#include <iostream>
using namespace std;
int main(void) {
	int nanj[9];
	int sum = 0, two_sum = 0, i, j, tmp;
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T = 9;
	while (T--) {
		cin >> nanj[T];
		sum += nanj[T];
	}
	for (int m = 0; m < 9; m++) {
		for (int n = m + 1; n < 9; n++) {
			if (nanj[n] < nanj[m]) {
				tmp = nanj[n];
				nanj[n] = nanj[m];
				nanj[m] = tmp;
			}
		}
	}

	int flag = 0;
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++)
		{
			two_sum = nanj[i] + nanj[j];
			if (100 == (sum - two_sum)) {
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}

	for (int k = 0; k < 9; k++) {
		if (i == k || j == k)
			continue;
		cout << nanj[k] << '\n';
	}
	return 0;
}