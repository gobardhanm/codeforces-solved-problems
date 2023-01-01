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
        vector<int> v1;
        vector<int> v2;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v1.pb(abs(a));
            if(a < 0){
                cnt++;
            }
        }
        for(int i = 0; i < n; i++){
            if(cnt > 0){
                v1[i] = -v1[i];
                cnt--;
            }
        }
        bool ans = true;
        for(int i = 1; i < n; i++){
            if(v1[i] < v1[i - 1])
                ans = false;
        }
        cout << (ans ? "YES" : "NO") << endl;
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
