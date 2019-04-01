#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void) {
	int T;
	string S;
	cin >> T;
	while (T--) {
		stack<char> ps;
		cin >> S;
		for (auto s : S) {
			if (s == '(')
				ps.push(s);
			else if(!ps.empty() && s ==')'){
				ps.pop();
			}
			else {
				ps.push(s);
				break;
			}
		}
		if(ps.empty())
			cout << "YES";
		else
			cout << "NO";
		cout << '\n';
	}
	return 0;
}