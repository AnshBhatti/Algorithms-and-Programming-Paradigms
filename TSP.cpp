#include <iostream>
#include <algorithm>
using namespace std;

int n, n1, s, s1, w, v, m, vertex, c, total;
int graph[10000][10000];
bool visited[10000];

void nearest_neighbor(int r) {
	m = 10000000;
	visited[r] = true;
	c++;
	for (int i = 0; i < n; i++)
		if (graph[r][i] != 0 && graph[r][i] < m && !visited[i]) {
			m = graph[r][i];
			vertex = i;
		}
	//cout << vertex << endl;
	total += m;
	//cout << "add: " << m << endl;
	if (c == n1-1)
		cout << total + graph[vertex][v] << endl;
	else
		nearest_neighbor(vertex);
}

int main() {
	c = 0;
	total = 0;
	cout << "Number of vertices: ";
	cin >> n1;
	cout << "Number of connections: ";
	cin >> n;
	cout << "Put in each connection as two vertices separated by a space: Input the vertices and the weight.For example, the input is 0 5 20, where from vertex 0 to 5 or 5 to 0, the cost of travel is 20: \n";
	for (int i = 0; i < n; i++) {
		cin >> s >> s1 >> w;
		graph[s][s1] = w;
		graph[s1][s] = w;
	}
	cout << "Which vertex do you want to start with? ";
	cin >> v;
	//cout << v << endl;
	nearest_neighbor(v);
}