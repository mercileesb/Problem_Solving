#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;
int sketchbook[512][512];
bool check[512][512];
int n, m;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int paintNum = 0;
int i, j, area;
queue<pair<int, int>> Q;
void BFS() {
	check[i][j] = true;
	Q.push({ i,j });
	area = 1;
	while (!Q.empty()) {
		pair<int, int> curPos = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = curPos.X + dx[dir];
			int ny = curPos.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
			if (check[nx][ny] || sketchbook[nx][ny] != 1) continue;
			check[nx][ny] = true;
			area++;
			Q.push({ nx,ny });
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++) 
			cin >> sketchbook[i][j];

	int maxArea = area;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (sketchbook[i][j] == 0 || check[i][j]) continue;
			else {
				BFS();
				if (maxArea < area)
					maxArea = area;
				paintNum++;
			}
		}
	}
	cout << paintNum << '\n' <<maxArea;
	return 0;
}