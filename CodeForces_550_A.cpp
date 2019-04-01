#include <iostream>
#include <string>
using namespace std;
char charr[100];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; string str; string result; bool flag = true;
	char minval = 127, maxval = -127; int i, sum=0;
	cin >> T;
	while (T--) {
		cin >> str;
		for (auto s : str)
			charr[s - 97]++;
		for (i = 0; i < str.size(); i++) {
			minval = minval > str[i] ? str[i] : minval;
			maxval = maxval < str[i] ? str[i] : maxval;
		}
		minval -= 'a'; maxval -= 'a';
		for (i = (int)minval; i <= (int)maxval; i++) {
			if (charr[i] != 1) {
				flag = false;
				break;
			}
		}
		if (flag) result = "yes";
		else result = "no";

		cout << result << '\n';
		minval = 127, maxval = -127; sum = 0; flag = true;
		for (auto &s : charr) s = 0;
	}
	return 0;
} //Accepted