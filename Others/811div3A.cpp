#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     int n, H, M;
        cin >> n >> H >> M;
        pair<int, int> ans = {24, 60};
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            int hoursDiff = 24, minDiff = 60;
            if(b < M){
                hoursDiff = ((a - 1 - H) + 24) % 24;
                minDiff = ((b - M) + 60) % 60;
            }else{
                hoursDiff = ((a - H) + 24) % 24;
                minDiff = ((b - M) + 60) % 60;
            }
            ans = min(ans, make_pair(hoursDiff, minDiff));
        }
        cout << ans.first << " " << ans.second << endl;
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
