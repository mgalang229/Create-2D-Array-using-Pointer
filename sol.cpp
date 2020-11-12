#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int r, c;
	cin >> r >> c;
	int **a = new int*[r];
	for(int i=0; i<r; ++i)
		a[i] = new int[c];
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
			cin >> a[i][j];
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
