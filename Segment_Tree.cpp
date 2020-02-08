#include <iostream>
#include <algorithm>
using namespace std;

int arr[10000], n;
int ar[20000];

int q[2];
int num, num1, r, s1;
int max_i = 0;

void segment_tree(int i, int n1, int n2) {
	if (n1 != n2) {
		int s = (n1 + n2) / 2;
		num = *min_element(arr + n2, arr + n1 + 1);
		num1 = *min_element(arr + s + 1, arr + n1);
		for (int a = 0; a < n; a++) {
			if (num == arr[a]) {
				ar[i] = a;
			}
		}
		segment_tree((i + 1) * 2 - 1, s, n2);
		s = (n1 + n2) / 2;
		segment_tree((i + 1) * 2, n1, s + 1);
	}
	else {
		ar[i] = n1;
		if (i > max_i) {
			max_i = i;
		}
	}
}

int main() {
	cin >> n;
	fill_n(ar, 20000, -1);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> q[i];
	}
	num = *min_element(arr, arr + n);
	segment_tree(0, n - 1, 0);
	for (int i = 0; i <= max_i; i++) {
		cout << ar[i] << ' ';
	}
	cout << endl;
}