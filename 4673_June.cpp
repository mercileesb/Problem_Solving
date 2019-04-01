#include <iostream>
using namespace std;
int NotSelfNums[10001];
int D(int number) {
	int storeNum = number;
	int remSum = 0;
	do{
		remSum += storeNum % 10;
	}while (storeNum /= 10);
	number += remSum;
	return number;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int n = 1; n <= 10000; n++) {
		if(D(n) <= 10000)
			NotSelfNums[D(n)]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (0 == NotSelfNums[i])
			cout << i << '\n';
	}
	return 0;
}
