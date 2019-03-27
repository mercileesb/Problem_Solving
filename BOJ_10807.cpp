#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, num, v, arr[202] = { 0 };
	cin >> N;
	for(int i =0 ; i<N; i++) {
		cin >> num;
		num += 100;
		arr[num]++;
	}
	cin >> v;
	v += 100;
	cout << arr[v];
	return 0;
}
