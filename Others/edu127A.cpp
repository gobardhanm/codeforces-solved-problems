#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    string s;
        cin >> s;
        int n = s.size();
        int cnt = 0;
        char prev = '?';
        bool ans = true;
        for(int i = 0; i < n; i++){
            if(s[i] != prev){
                if(cnt != 0 && cnt < 2){
                    ans = false;
                }
                cnt = 1;
                prev = s[i];
            }else{
                cnt++;
            }
        }
        if(cnt < 2){
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
