#include <string>
#include <vector>

using namespace std;
int answer;
int n;
void dfs(vector<int> &numbers, int idx, int cur, int target) {
	if (idx == n) {
		if (cur == target) {
			answer++;
		}
		return;
	}
	dfs(numbers, idx + 1, cur + numbers[idx], target);
	dfs(numbers, idx + 1, cur - numbers[idx], target);
	return;
}

int solution(vector<int> numbers, int target) {
	answer = 0;
	n = numbers.size();
	dfs(numbers, 0, 0, target);
	return answer;
}