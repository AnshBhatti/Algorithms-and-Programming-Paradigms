#include <iostream>
using namespace std;

bool dp[100][100];
int query[100][100];
int i = 0;
int x;
int n, n1, n2, budget;
int fac = 0;
int fac1 = 0;
void recurse(int layer) {
	for (int i = 0; i <= budget; i++) {
		if (dp[layer][i]) {
			x = 0;
			while (query[layer][x] != 0) {
				dp[layer + 1][i - query[layer][x]] = true;
				//cout << query[layer][x] << endl;
				x++;
			}
		}
	}
	//cout << endl;
	//cout << layer << endl;
	if (layer + 1 == n) {
		for (int t = 0; t < budget; t++) {
			if (!fac && dp[layer + 1][t]) {
				cout << t << endl;
				fac = 1;
			}
		}
		if (!fac) {
			cout << "NO SOLUTION\n";
		}
	}
	else {
		recurse(layer + 1);
	}
	
}

int main() {
	cin >> budget >> n;
	dp[0][budget] = true;
	for (int i = 0; i < n; i++) {
		cin >> n1;
		for (int a = 0; a < n1; a++) {
			cin >> query[i][a];
		}
	}
	//cout << "DONE\n";
	recurse(0);
}
