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
    string s;
    cin >> s;
    int ones = 0, zeros = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'n')
            ones++;
        if(s[i] == 'z')
            zeros++;
    }
    while(ones--){
        cout << 1 << " ";
    }
    while(zeros--){
        cout << 0 << " ";
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
