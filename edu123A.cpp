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
        map<char, int> pos;
        for(int i = 0; i < 6; i++){
            pos[s[i]] = i;
        }
        if(pos['R'] > pos['r'] && pos['G'] > pos['g'] && pos['B'] > pos['b']){
            cout <<"YES" << endl;
        }else{
            cout << "NO" << endl;
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
