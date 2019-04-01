/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 
각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.*/
#include <iostream>
#include <string>
using namespace std;
int alphaCount[26];
int main(void) {
	char num, len;
	string S; 
	cin >> S;
	len = S.size();
	for (int i = 0; i < len; i++) {
		num = S.c_str()[i] - 97;
		alphaCount[num]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alphaCount[i] << ' ';
	}
	return 0;
}