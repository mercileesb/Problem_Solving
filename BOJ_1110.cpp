#include <iostream>
#include <string>
using namespace std;
int getTens(int num) {
	int tens;
	num /= 10;
	tens = num % 10;
	return tens;
}

int getUnits(int num) {
	int units;
	units = num % 10;
	return units;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string strNum;
	int N, initN, _count=0;
	cin >> N;
	initN = N;
	do {
		strNum.clear();
		if (N < 10) {
			N = 10 * N + N;
		}
		else if (N >= 10) {
			int tmpN = getTens(N) + getUnits(N);
			strNum.push_back((char)(getUnits(N) + '0'));
			strNum.push_back((char)(getUnits(tmpN) + '0'));
			N = stoi(strNum);
		}
		_count++;
		if (initN == N) break;
	} while (1);
	cout << _count;
	return 0;
}
