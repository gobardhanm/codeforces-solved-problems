#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int x, y;
		cin >> x >> y;
		if((x + y) % 2 != 0)
			cout << -1 << " " << -1 << endl;
		else{
			int val1 = (x + y) / 2;
			if(val1 >= x){
				cout << x << " " << val1 - x << endl;
			}else{
				cout << val1 << " " << 0 << endl;
			}
		}
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
