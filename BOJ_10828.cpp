#include <iostream>
#include <string>
/*
push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. 
���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. 
���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/
int stack[1024];
int idx=-1;
using namespace std;

int empty() {
	if (-1 == idx)
		return 1;
	else
		return 0;
}
void push(int X) {
	stack[idx++] = X;
}

int pop() {
	if (empty())
		return -1;
	return stack[idx--];
}

int size() {
	return idx+1;
}

int top() {
	if (empty())
		return -1;
	return stack[idx];
}

int main(void) {
	int T;
	string S;
	cin >> T;
	while (T--) {
		//?
		switch (string)
		{
		case "push":
			break;
		}
	}
	return 0;
}