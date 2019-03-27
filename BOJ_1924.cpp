#include <iostream>
#include <string>
#define NUM_YEAR 365
using namespace std;
typedef int Month;
typedef int Date;
typedef std::string Day;
typedef struct _calender {
	Month _mon;
	Date _date;
	Day _day;
}Calender;
int main() {
	int m_input, d_input;
	cin >> m_input >> d_input;
	Month month = 1; Date date = 0;
	Day dayTable[7] = {
		"MON","TUE","WED","THU","FRI","SAT","SUN" };
	Calender calender[NUM_YEAR];
	for (int i = 0; i < NUM_YEAR; i++) {
		date++;
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10:
			if (date > 31) {
				month++;
				date = 1;
			}
			break;
		case 4: case 6: case 9: case 11:
			if (date > 30) {
				month++;
				date = 1;
			}
			break;
		case 2:
			if (date > 28) {
				month++;
				date = 1;
			}
			break;
		}
		calender[i]._mon = month;
		calender[i]._date = date;
		calender[i]._day.append(dayTable[(i%7)]);
		
		if (calender[i]._mon == m_input && calender[i]._date == d_input) {
			cout << calender[i]._day;
			break;
		}
	}
	return 0;
}