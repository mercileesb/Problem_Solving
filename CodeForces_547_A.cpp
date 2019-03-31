#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	int numofmoves = 0;
	cin >> n >> m;
	while (1) {
		if (n == m)
			break;
		if (m % (n * 3) == 0) {
			n *= 3;
			numofmoves++;
			continue;
		}
		else if (m % (n * 2) == 0) {
			n *= 2;
			numofmoves++;
			continue;
		}
		else {
			numofmoves = -1;
			break;
		}
	}
	cout << numofmoves;
	return 0;
}

