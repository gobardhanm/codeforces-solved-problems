#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    map<string, int> mp;
    string a[3][n];
    for(int i=0 ; i< 3; ++i){
        for(int j=0; j< n; ++j){
            cin >> a[i][j];
            mp [a[i][j]]++;
        }
    }
    for(int i=0; i<3; ++i){
        int sc = 0;
        for(int j=0 ; j<n; ++j){
            if(mp[a[i][j]] == 1) {sc += 3; }
        
        else if(mp[a[i][j]] == 2){ sc++; }
    }
        
    cout << sc << ' ';
   }
    
cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }

    return 0;
}
