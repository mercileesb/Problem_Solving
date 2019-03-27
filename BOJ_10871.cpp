#include <iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i, N, X, T;
	int arr[10000];
	cin >> N >> X;
	T = 0;
	for (i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] < X) {
			T++;
			continue;
		}
		else {
			i--; N--;
		}
	}

	for (i = 0; i < T; i++) {
		cout << arr[i] <<' ';
	}
	return 0;
}
