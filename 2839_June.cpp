#include <iostream>
using namespace std;
int main(void) {
	int N;
	int bag = 0; int rem;
	cin >> N;
	rem = N % 5;
	switch (rem)
	{
	case 0:
		bag = N / 5;
		break;
	case 1:
	case 3:
		bag = (N / 5) + 1;
		break;
	case 2:
	case 4:		
		if(N > 7) bag = bag = (N / 5) + 2;
		break;
	}
	bag = (0 == bag) ? -1 : bag;
	cout << bag;
	return 0;
}
