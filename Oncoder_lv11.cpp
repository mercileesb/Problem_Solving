#include <iostream>
#include <vector>
#include <string>
using namespace std;
int solution(int balance, vector<string> transactions) {
	return 0;
}
int main() {
	int balance = 1000;
	vector<string> transactions;
	string input_str;
	int account = balance;
	size_t idx = 0;
	for (int i = 0; i < 5; i++) {
		getline(cin, input_str);
		transactions.push_back(input_str);
		if ('C' == transactions[i][0]) {
			account += (stoi(input_str.substr(2)));
		}
		else if ('D' == transactions[i][0]) {
			account -= (stoi(input_str.substr(2)));
		}
	}
	return 0;
}