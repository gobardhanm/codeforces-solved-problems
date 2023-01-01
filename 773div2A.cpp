#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     vector<pair<lld, lld>> v(3);
        for(int i = 0; i < 3; i++){
            cin >> v[i].second >> v[i].first;
        }
        sort(v.begin() , v.begin());
        reverse(v.begin() , v.end();
        if(v[0].first == v[1].first){
            cout << abs(v[1].second - v[0].second) << endl;
        }else{
            cout << 0 << endl;
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
