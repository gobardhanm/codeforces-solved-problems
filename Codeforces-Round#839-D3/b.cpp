#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
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
    int a , b , x , y;
    cin >> a >> b >> x >>y;
    int ckr = 0 , ckc= 0;
    if(a > b && x > y) ckr = 1;
    if(a < b && x < y) ckr = 1;
    if(a < x && b < y) ckc = 1;
    if(a > x && b > y) ckc = 1;
    if(ckr && ckc){
        cout << "YES" << nline;
    }else {
        cout << "NO" << nline;
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
