#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(i < n - 1){
                if(s[i] == '0' && s[i + 1] == '0'){
                    ans += 2;
                }else if(s[i] == '0' && s[i + 1] == '1' && i < n - 2 && s[i + 2] == '0'){
                    ans++;
                }
            }
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
