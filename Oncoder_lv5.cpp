#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, _count = 0;
	int j=0;
	cin >> a;
	string buffer;
	char *c_buffer;
	for (int i = 13; i <= a; i++) {
		buffer = to_string(i);
		c_buffer = (char*)buffer.c_str();
		while (buffer[j] != '\0') {
			if (j != sizeof(buffer)-1 && '1' == buffer[j]  ) {
				if ('3' == buffer[j + 1])
				{
					_count++;
					break;
				}
			}
			j++;
		}
		j = 0;
	}
	cout << _count;
	return 0;
}
