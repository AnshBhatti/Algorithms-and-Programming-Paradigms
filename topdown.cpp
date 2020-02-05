#include <iostream>
using namespace std;

int x = 0;
int max_cost;
int n, n1, n2, budget;
int query[100][100];
bool dp[100][100];

void topdown(int layer) {
	for (int i = 0; i <= budget; i++) {
		if (dp[layer][i]) {
			x = 0;
			while (query[layer][x] != 0) {
				if (i + query[layer][x] <= budget)
					dp[layer + 1][i + query[layer][x]] = true;
				x++;
			}
		}
	}
	if (layer + 1 == n) {
		for (int k = 0; k <= budget; k++) {
			if (dp[layer + 1][k])
				max_cost = k;
		}
		cout << max_cost << endl;
	}
	else
		topdown(layer + 1);
}

int main() {
	cin >> budget >> n;
	dp[0][0] = true;
	for (int i = 0; i < n; i++) {
		cin >> n1;
		for (int a = 0; a < n1; a++) {
			cin >> query[i][a];
		}
	}
	topdown(0);
}