#include <iostream>
using namespace std;
int main() {
	int q;
	cin >> q;
	while (q--) {
		long long n;
		int a, b;
		long long p;
		cin >> n >> a >> b;

		if (2 * a <= b) //2*a가 b보다 작으면 무조건 a를 사는게 이득
			p = a;
		else { //2*a가 b보다 크면, 전체 리터가 홀수냐 짝수냐 구분해야함.
			if (n % 2 != 0)
				p = a + (b * (n / 2));
			else
				p = b * n/2;
		}
		cout << p << "\n";
	}
	return 0;
}