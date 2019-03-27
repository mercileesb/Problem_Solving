#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T = 7;
	int input, num_odd, sum_odd = 0, min_odd = 999;
	while (T--) {
		cin >> input;
		if (input % 2 != 0) {
			sum_odd += input;
			if(min_odd > input)
				min_odd = input;
		}
	}
	if (sum_odd == 0) {
		sum_odd = -1;
		cout << sum_odd;
	}
	else
		cout << sum_odd << '\n' << min_odd;

	return 0;
}