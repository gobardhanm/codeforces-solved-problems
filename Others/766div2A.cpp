#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n, m, a, b;
        cin >> n >> m >> a >> b;  
        a--, b--;
        vector<string> s(n);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            for(int j = 0; j < m; j++){
                if(s[i][j] == 'B')
                    cnt++;
            }
        }
        if(s[a][b] == 'B'){
            cout << 0 << endl;
            continue;
        }
        if(cnt == 0){
            cout << -1 << endl;
            continue;
        }
        int ans = 2;
        for(int i = 0; i < n; i++){
            if(s[i][b] == 'B'){
                ans = 1;
            }
        }
        for(int i = 0; i <m; i++){
            if(s[a][i] == 'B')
                ans = 1;
        }
        cout << ans << endl;
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
