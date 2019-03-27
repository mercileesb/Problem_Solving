#include <iostream>
#include <numeric>
using namespace std;
int hansu[1001] = { 0 };
bool isHansu(int N) {
	int eachNums[4];
	int i = 0;
	do {
		eachNums[i++] = N % 10;
	} while (N /= 10);
	if(eachNums[2] - eachNums[1] == eachNums[1] - eachNums[0]) return true;
	return false;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, sum =0;
	cin >> N;
	do {
		if (N >= 100) { //100~999
			if (isHansu(N)) hansu[N]++;
		}
		else if(N < 100){ //1~99
			hansu[N-1]++;
		}
	} while (N--);
	for (int i = 0; i < 1000; i++) {
		sum += hansu[i];
	}
	cout << sum;
	return 0;
}
