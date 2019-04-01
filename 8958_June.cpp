#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, i = 0, j=0, score, o_count = 0, sum = 0;
	char ox_str[80];
	cin >> T;
	while (T--) {
		i=0, j=0, sum = 0;
		cin >> ox_str;
		while (ox_str[i] != '\0') {
			if (ox_str[i] == 'O') {
				j = i;
				score = 0; o_count = 0;
				while (ox_str[j] == 'O') {
					o_count++;
					score += o_count;
					j++;
				}
				sum += score;
				i = j;
			}
			else {
				i++;
			}
		}
		cout << sum << '\n';
	}
	return 0;
}

