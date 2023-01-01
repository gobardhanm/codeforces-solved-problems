#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

bool square(ll a){
    ll v = sqrt(a);
    if(v * v == a || (v - 1) * (v - 1) == a || (v + 1) * (v + 1) == a)
        return true;
    return false; 
}

void solve() {
    ll a, b;
        cin >> a >> b;
        ll diff = a * a + b * b;
        if(a == 0 && b == 0){
            cout << 0 << endl;
        }else if(square(diff)){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
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
