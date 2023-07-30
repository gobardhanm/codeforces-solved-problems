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
    int prev = 2e9;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(min(a, b) > prev){
            cout << "NO" << endl;
            return;
        }else{
            if(max(a, b) <= prev)
                prev = max(a, b);
            else
                prev = min(a, b);
        }
    }
    cout << "YES" << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    /* cin >> tc; */
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
