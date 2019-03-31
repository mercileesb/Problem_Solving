#include <iostream>
#include <string>
using namespace std;
char charr[100];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; string str; string result;
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
		minval -= 97; maxval -= 97;
		for (i = (int)minval; i <= (int)maxval; i++) {
			sum += (int)charr[i];
		}
		if ((int)maxval - (int)minval + 1 == sum) result = "yes";
		else if((int)maxval - (int)minval + 1 != sum) result = "no";

		cout << result << '\n';
		minval = 127, maxval = -127; sum = 0;
		for (auto &s : charr) s = 0;
	}
	return 0;
} //Wrong answer on test 3

