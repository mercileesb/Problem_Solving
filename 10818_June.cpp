#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int N; 
	string input_str; 
	char* token;
	vector<int> arr;
	cin >> N;
	arr.resize(N);
	getchar();
	getline(cin, input_str);//Input number of N with spaceBar
	char * str = new char[input_str.size()];
	strcpy(str,input_str.c_str());
	token = strtok(str, " ");
	int i = 0;
	do {
		arr[i++] = atoi(token);
	} while (token = strtok(NULL, " "));
	sort(arr.begin(), arr.end());
	cout << arr[0] << " " << arr[N-1];
	return 0;
}