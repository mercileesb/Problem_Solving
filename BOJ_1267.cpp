#include <iostream>
using namespace std;
#define Y_COST 10 
#define M_COST 15
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, usage_time, m_usage_time;
	cin >> N; int y_price =0, m_price=0;
	while (N--) {
		int i = 0, y_t=0, m_t=0;
		cin >> usage_time;
		m_usage_time = usage_time;
		y_t = (usage_time / 30);
		m_t = (m_usage_time / 60);
		for(i=0; i<=y_t; i++) y_price += Y_COST;
		for(i=0; i<=m_t; i++) m_price += M_COST;
	}

	if (y_price == m_price)
		cout << 'Y' << ' ' << 'M' <<' '<<y_price;
	else if(y_price < m_price)
		cout << 'Y' << ' ' << y_price;
	else
		cout << 'M' << ' ' << m_price;
	return 0;
}