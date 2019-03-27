#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T = 9;
	int input, max=-9999, idx=1,maxidx;
	while (T--) {
		cin >> input;
		idx++;
		if (max < input) {
			max = input;
			maxidx = idx-1;
		}
	}
	cout << max << '\n' << maxidx;
	return 0;
}