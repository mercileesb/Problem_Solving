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

		if (2 * a <= b) //2*a�� b���� ������ ������ a�� ��°� �̵�
			p = a;
		else { //2*a�� b���� ũ��, ��ü ���Ͱ� Ȧ���� ¦���� �����ؾ���.
			if (n % 2 != 0)
				p = a + (b * (n / 2));
			else
				p = b * n/2;
		}
		cout << p << "\n";
	}
	return 0;
}