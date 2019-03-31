#include <iostream>
using namespace std;

int main() {
	long long N, w, h, answer = 9999999;
	cin >> N;
	if (1 == N)
		answer = 0;
	else {
		for (w = 1; w <= N/2; w++) {
			if (N == (N / w) * w) {
				h = N / w;
				if (answer > abs(w - h))
					answer = abs(w - h);
			}
		}
	}
	cout << answer;
	return 0;
}