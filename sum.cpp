#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b == c || b+c == a || a+c == b){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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
