#include <iostream>
using namespace std;
double solution(int x1, int m1, int x2, int m2) {
	double p = (sqrt((double)m1)*(double)x2 + sqrt((double)m2)*(double)x1) / (sqrt((double)m2) + sqrt((double)m1));
	return p;
}
int main() {
	return 0;
}