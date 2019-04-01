#include <iostream>
using namespace std;
int arr[10];
int main(void) {
	int T = 3;
	int input, result = 1;
	while (T--) {
		cin >> input;
		result *= input;
	}
	
	while (result != 0) {
		arr[result % 10]++;
		result /= 10;
	}
	for(auto &n : arr)
		cout << n << '\n';
	return 0;
}