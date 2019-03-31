#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<string> cmds;
	vector<int> arr;
	string str;
	int x;
	for (int i = 0; i < 3; i++) {
		getline(cin,str);
		cmds.push_back(str);
	}
	for (auto &s : cmds) {
		if (s.size() == 3 && !(arr.empty())) { //POP
			arr.erase(arr.begin());
		}
		else if(s.size() > 3){ //PUSH
			size_t pos = s.find(" ");
			arr.push_back(stoi(s.substr(pos + 1)));
		}
	}
	return 0;
}