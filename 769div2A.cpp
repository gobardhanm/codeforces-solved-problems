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
        string s;
        cin >> s;
        if(s.length() >= 3){
            cout << "NO" << endl;
        }else if(s.length() == 1){
            cout << "YES" << endl;
        }else if(s[0] == s[1]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
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
