#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n, ans = 0;
    cin >> n;
 
    vector<int> type(n);
 
    for(int i=0; i<n; i++)
    {
        cin >> type[i];
    }
 
    vector<int> a, b;
 
    for(int i=0; i< n; i++)
    {
        int x;
        cin >> x;
        ans += x;
 
        if(type[i])
            a.pb(x);
        else
            b.pb(x);
    }
 
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end(), greater<>());
 
    int m = min(a.size(), b.size());
 
    for(int i= 0; i< m ; ++i)
    {
        ans += a[i] + b[i];
    }
 
    if(a.size() == b.size())   
        ans -= min(a[m - 1], b[m - 1]);
 
 
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
