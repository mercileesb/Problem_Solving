/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. 
�� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
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