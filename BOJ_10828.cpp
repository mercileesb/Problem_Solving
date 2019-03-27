#include <iostream>
#include <string>
/*
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 
만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 
만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
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