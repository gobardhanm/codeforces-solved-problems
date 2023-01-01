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
    string s;
		cin >> s;
		int n = s.length();
		if(n & 1){
			cout << "NO" << endl;
		}else{
			string s1 = s.substr(0, n / 2);
			string s2 = s.substr(n / 2, n / 2);
			cout << (s1 == s2 ? "YES" : "NO") << endl;
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
