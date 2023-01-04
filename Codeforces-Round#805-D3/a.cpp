#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
// Gobardhan Meher
//
// Round Down the Price

void solve() {
	int m;
	cin >> m;
	int temp = m;
	int ct = 0;
	while(m != 0){
		m = m/10;
		ct++;
	}
	int pw = (ct -1);
	int ans =pow(10, pw);
	cout << temp - ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++) {
		solve();
	}
	
	return 0;
}

