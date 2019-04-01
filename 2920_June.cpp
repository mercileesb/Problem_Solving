#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int flag = 2;
	//"ascending","descending","mixed"
	int key[8];
	for (int i = 0; i < 8; i++) {
		cin >> key[i];
	}
	for (int i = 0; i < 8; i++) {
		if (i == 7) {
			flag = 0; 
			break;
		}
		else if (key[i] < key[i + 1]) continue;
		else break;
	}
	for (int i = 0; i < 8; i++) {
		if (i == 7) {
			flag = 1;
			break;
		}
		else if (key[i] > key[i + 1]) continue;
		else break;
	}
	switch (flag)
	{
	case 0:
		cout << "ascending";
		break;
	case 1:
		cout << "descending";
		break;
	case 2:
		cout << "mixed";
		break;
	}
	return 0;
}
