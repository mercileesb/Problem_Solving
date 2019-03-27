#include <iostream>
using namespace std;
int main(void) {
	char words[101];
	int idx = 0;
	cin >> words;
	while (words[idx] != '\0') {
		cout << words[idx++];
		if (0 == idx % 10)
			cout << '\n';
	}
	return 0;
}
