#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i < 2*n; i++) {
		if (i <= n) { 
			for (int j = 1; j < i; j++)
				cout << ' ';
			for (int k = 2 * n; k >= (2*i); k--)
				cout << '*';
		}
		else { 
			for (int j = n; j > (i-n)+1; j--)
				cout << ' ';
			for (int k = 0; k <= 2*(i-n); k++) {
				cout << '*';
			}
		}
		cout << '\n';
	}
	return 0;
}