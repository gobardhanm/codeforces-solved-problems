#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int n, r, b;
	cin >> n >> r >> b;
 
	int p = r / (b+1);
	int q = r % (b+1);
	
	for(int i=0; i<q; i++) 
		cout << string(p+1, 'R') << 'B';
	for(int i=q; i<b; i++) 
		cout << string(p, 'R') << 'B';
 
	cout << string(p, 'R');
	cout << endl;
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
