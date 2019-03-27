#include <iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m[3];
	for (int i = 0; i < 3; i++) {
		cin >> m[i];
	}
	if ((m[1] >= m[0] && m[2] >= m[1]) || (m[1] <= m[0] && m[2] <= m[1])) {
		cout << m[1];
	}
	else {
		if (m[0] == m[2]) {
			cout << m[0];
		}
		else {
			if (m[1] < m[0])
			{
				if (m[0] < m[2])
					cout << m[0];
				else
					cout << m[2];
			}
			else {
				if (m[0] < m[2])
					cout << m[2];
				else
					cout << m[0];
			}
		}
	}
	return 0;
}
