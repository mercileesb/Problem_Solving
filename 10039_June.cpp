#include <iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T = 5, num, sum = 0;
	while (T--) {
		cin >> num;
		num = num < 40 ? 40 : num;
		sum += num;
	}
	cout << sum / 5;
	return 0;
}
