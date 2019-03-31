#include <iostream>
using namespace std;
int getDigits(int input) {
	int sumDigits=0;
	do {
		sumDigits += (input % 10);
	} while (input /= 10);
	return sumDigits;
}
int main() {
	int a;
	int i, answer = 0;
	cin >> a;
	for (i = 1; i <=a; i++) {
		if (a == i + getDigits(i)) {
			answer++;
		}
	}
	cout << answer;
	return 0;
}
