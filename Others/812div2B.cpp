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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    int preLen = 1;
    while (preLen < n && a[preLen] <= a[preLen + 1])
        preLen++;
 
    int sufLen = 1;
    while (sufLen < n && a[n-sufLen] >= a[n-sufLen + 1])
        sufLen++;
 
    if (preLen + sufLen >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
