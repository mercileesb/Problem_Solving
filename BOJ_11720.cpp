#include <iostream>
using namespace std;
int main(void) {
	int N, sum = 0;
	char ch;
	cin >> N;
	getchar();
	while ((ch = getchar()) != '\n'){
		sum += (int)(ch - '0');
	}
	cout << sum;
	return 0;
}
