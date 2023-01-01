#include<bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	cout << max(0, max(b, c)+1-a) << " ";
	cout << max(0, max(a, c)+1-b) << " ";
	cout << max(0, max(b, a)+1-c) << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tc=1;
	cin >> tc;
	for(int i=1; i<=tc; ++i) {
		solve();
	}
	return 0;
}

