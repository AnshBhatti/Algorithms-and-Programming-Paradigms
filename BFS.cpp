#include <iostream>
#include <queue>
using namespace std;
int n, graph[100][100], n1, s, s1, s2;
queue<int>q;
bool fac;
bool visited[1000];
void bfs(int v) {
	if (!visited[v]) {
		cout << v << endl;
		for (int i = 0; i <= n; i++)
			if (graph[v][i])
				q.push(i);
	}
	q.pop();
	if (q.size() > 0)
		bfs(q.front());
}

int main() {
	cout << "Number of vertices: ";
	cin >> n;
	cout << "Number of edges: ";
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> s >> s1;
		graph[s][s1] = 1;
	}
	cout << "Which vertex do you want to start with: ";
	cin >> s2;
	q.push(s2);
	bfs(s2);
}