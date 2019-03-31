#include <iostream>
using namespace std;
//Time Complexity O(n)
//Space Complexity O(n)
int x[200000];
int main() {
	int C, B, _sec = 1, prev, N = -1;
	cin >> C >> B;
	while (_sec++) {
		prev = C;
		C += (prev + 1);
		cout << C << '\n';
		if (_sec > 100)
			break;
	}
	//cout << N;	
	return 0;
}