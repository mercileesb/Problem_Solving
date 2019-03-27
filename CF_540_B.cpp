#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
//#540(div3) B. Tanya and Candies
int main() {
	int n; int goodCandies = 0;
	string inputNums; 
	char * str, * token; 
	vector<int> candies;
	vector<int> myCandies;
	cin >> n; //number of candies
	candies.resize(n); //allocate candy array
	myCandies.resize(n - 1);
	getchar(); //remove \n in the buffer
	getline(cin, inputNums); //Input candies weight
	str = new char[inputNums.size()];
	strcpy(str, inputNums.c_str());
	int i = 0;
	token = strtok(str, " ");
	do {
		candies[i++] = atoi(token);
	}while(token = strtok(NULL, " "));
	for (i = 0; i < candies.size(); i++) {
		int _even=0, _odd=0;
		for (int j=0; j < myCandies.size(); j++) { //copy
			myCandies[j] = candies[j];
		}
		for (int k = i; k < myCandies.size(); k++) {
			myCandies[k] = candies[k + 1];
		}
		for (int e = 1; e < myCandies.size(); e += 2) {
			_even += myCandies[e];
		}
		for (int o = 0; o < myCandies.size(); o += 2) {
			_odd += myCandies[o];
		}
		if (_even == _odd)
			goodCandies++;
	}
	cout << goodCandies;
	return 0;
}