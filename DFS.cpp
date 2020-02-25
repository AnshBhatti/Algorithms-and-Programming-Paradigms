#include <iostream>
#include <stack>
using namespace std;
int graph[100][100], n, n1, s1, s2, s3;
bool visited[1000];
bool fac;
stack<int>s;

void dfs(int v) {
	if (!visited[v]) {
		s.push(v);
		cout << v << endl;
	}
	fac = false;
	visited[v] = true;
	for (int i = 0; i <= n; i++) {
		if (graph[v][i] && !visited[i]) {
			//cout << v << ' ' << i << endl;
			fac = true;
			dfs(i);
		}
	}
	if (!fac && s.size() > 1) {
		s.pop();
		dfs(s.top());
	}
}

int main() {
	cout << "Number of vertices: ";
	cin >> n;
	cout << "Number of edges: ";
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> s1 >> s2;
		graph[s1][s2] = 1;
	}
	cout << "Vertex you want to start with: ";
	cin >> s3;
	dfs(s3);
}