#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	vector<int> arr;
	vector<string> str;
	int i;
	for (i = 0; i < arr.size(); i++) {
		str.push_back(to_string(arr[i]));
	}
	sort(str.begin(), str.end());
	for (i = 0; i < arr.size(); i++) {
		arr[i] = stoi(str[i]);
	}
	return 0;
}
