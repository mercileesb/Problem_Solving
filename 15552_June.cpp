#include <iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, A, B;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		cout << A + B << '\n';
	}
	return 0;
}
