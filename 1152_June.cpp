#include <iostream>
#include <string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str; 
	int i = 0, j = 0, numofword = 0;
	getline(cin, str);
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			j = i;
			while (str[j] != ' ') {
				if (str[j] == '\0')
					break;
				j++;
			}
			numofword++;
			i = j;
		}
		else {
			i++;
		}
	}
	cout << numofword;
	return 0;
}
