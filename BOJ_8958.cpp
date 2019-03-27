#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, i = 0, j=0, score, o_count = 0, sum = 0;
	char ox_str[80];
	cin >> T;
	while (T--) {
		cin >> ox_str;
		while (ox_str[i] != '\0') {
			if (ox_str[i] == 'O') {
				score = 1; o_count = 0;
				while (ox_str[j++] == 'O') {
					o_count++;
					score += o_count;
				}
				i = j;
				j = 0;
			}
			else {
				i++;
			}
			sum += score;
		}
		cout << sum;
		//Git bash Test
	}
	return 0;
}

