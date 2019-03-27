#include <iostream>
using namespace std;

int main() {
	int N,sum=0;
	cin >> N;
	while (N--) {
		sum += N+1;
	}
	cout << sum;
	return 0;
}