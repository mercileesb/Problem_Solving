#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long A, B; 
	int T;
	cin >> A >> B;
	if (A == B) {
		cout << 0;
		return 0;
	}
	else if (A > B) {
		swap(A, B);
	}
	T = (int)(B - A - 1);
	cout << T << '\n';
	for (int i = 1; i <= T; i++) {
		cout << A + i <<' ';
	}
	return 0;
}