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
        reverse(s.begin() , s.end() );
        int n = s.size();
        vector<int> occ(26);
        for(int i = 0; i < n; i++){
            occ[s[i] - 'a']++;
        }
        while(s.size() > 0 && occ[s.back() - 'a'] > 1){
            occ[s.back() - 'a']--;
            s.pop_back();
        }
        reverse(s.begin() , s.end());
        cout << s << endl;
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
