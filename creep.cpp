#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int a, b;
	cin >> a >> b;
 
	for(int i=0; i<min(a, b); i++) 
		cout << "01";
	for(int i=0; i<abs(a-b); i++)
		cout << (a < b ? 1 : 0);
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
