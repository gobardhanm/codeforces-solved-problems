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
    vector<ll> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(all(v));
        if(v[0] + v[1] == v[2]){
            cout << "YES" << endl;
        }else{
            if(v[1] == v[2] && (v[0] % 2 == 0)){
                cout << "YES" << endl;
            }else if(v[0] == v[1] && (v[2] % 2 == 0)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
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
