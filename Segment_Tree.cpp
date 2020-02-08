#include <iostream>
#include <algorithm>
using namespace std;

int arr[10000], ar[20000], n, num, s1;
int max_i = 0;

void segment_tree(int i, int n1, int n2) {
	if (n1 != n2) {
		int s = (n1 + n2) / 2;
		num = *min_element(arr + n2, arr + n1 + 1);
		for (int a = 0; a < n; a++)
			if (num == arr[a])
				ar[i] = a;
		segment_tree((i + 1) * 2 - 1, s, n2);
		segment_tree((i + 1) * 2, n1, s + 1);
	}
	else {
		ar[i] = n1;
		if (i > max_i)
			max_i = i;
	}
}

int main() {
	cin >> n;
	fill_n(ar, 20000, -1); // Initializes all values to -1, so after the tree is created, -1 will show unused indexes
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	num = *min_element(arr, arr + n);
	segment_tree(0, n - 1, 0);
	for (int i = 0; i <= max_i; i++)
		cout << ar[i] << ' '; // Array representation is such that for every ar[n], it's left child is at ar[2*n] and right child at ar[2*n+1], like any other binary tree would be represented
	cout << endl;
}
