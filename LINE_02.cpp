#include <iostream>
using namespace std;
//Time Complexity O(n)
//Space Complexity O(n)
int building[10000000] = { 0 };
int main() {
	int N, curIdx=0, rope = 0, _maxRope = 0;
	cin >> N;
	for (int i =0; i < N; i++) {
		cin >> building[i];
	}
	
	for (int i = 1; i < N; i++) {
		if (building[curIdx] > building[i])
			rope++;
		else {
			_maxRope = _maxRope < rope ? rope : _maxRope;
			curIdx = i;
			rope = 1;
		}
	}
	cout << _maxRope;
	return 0;
}