#include <iostream>
using namespace std;
//���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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