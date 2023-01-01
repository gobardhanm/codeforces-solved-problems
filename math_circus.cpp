#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
        int n, k;
    cin >> n >> k;
 
    if(k % 2 == 0) {
        if((k + 2) % 4 == 0) {
            cout << "YES\n";
            for(int i = 1; i <= n; i += 2) {
                if((i + 1) % 4 == 0) {
                    cout << i << " " << i + 1 << "\n";
                } else {
                    cout << i + 1 << " " << i << "\n";
                }
            }
        } else {
            cout << "NO\n";
            return ;
        }
    } else {
        cout << "YES\n";
        for(int i = 1; i <= n; i += 2) 
            cout << i << " " << i+1 << "\n";
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
