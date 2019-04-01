#include <iostream>
using namespace std;
//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
int main(void) {
	char grade[5] = { 'A','B','C','D','F' };
	int i, score;
	cin >> score;

	if (score >= 90)
		i = 0;
	else if (score >= 80)
		i = 1;
	else if (score >= 70)
		i = 2;
	else if (score >= 60)
		i = 3;
	else
		i = 4;
	cout << grade[i];
	return 0;
}