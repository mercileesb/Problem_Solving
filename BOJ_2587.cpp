#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int arr[5];
	int sum = 0, avg, midnum;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[i]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	avg = sum / 5;
	midnum = arr[2];
	cout << avg << '\n' << midnum;
	return 0;
}