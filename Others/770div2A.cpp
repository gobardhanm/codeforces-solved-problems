#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool a = true;
        for(int i = 0; i < n; i++){
            if(s[i] != s[n - i - 1])
                a = false;
        }   
        if(a){
            cout << 1 << endl;
        }else{
            if(k >= 1){
                cout << 2 << endl;
            }else{
                cout << 1 << endl;
            }
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
