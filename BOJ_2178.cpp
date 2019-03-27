#include <iostream>
#include <string>
#include <queue>
#define X first
#define Y second
using namespace std;
int miro[100][100];
bool check[100][100];
int N, M;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int minStep;
int step;
queue<pair<int, int>> Q;
void BFS() {
	check[0][0] = true;
	Q.push({ 0,0 }); //Start
	while (!Q.empty()) {
		pair<int, int> curPos = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = curPos.X + dx[dir];
			int ny = curPos.Y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)continue;
			if (check[nx][ny] || miro[nx][ny] != 1) continue;
			check[nx][ny] = true;
			step++;
			Q.push({ nx,ny });
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> N >> M;
	string S;
	for (int i = 0; i < N; i++) {
		int j = 0;
		cin >> S;
		atoi(S.c_str());
		for (auto s : S) {
			miro[i][j++] = s;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cout << miro[i][j];
		cout << '\n';
	}
	return 0;
}