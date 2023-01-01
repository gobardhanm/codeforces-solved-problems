#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n;
	cin >> n;
 
	if(n >= 1900) 
		cout << "Division 1" << endl;
	else if(1600 <= n && n <= 1899) 
		cout << "Division 2" << endl;
	else if(1400 <= n && n <= 1599)
		cout << "Division 3" << endl;
	else 
		cout << "Division 4" << endl;
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
