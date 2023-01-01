#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    set<int> x;
    for(int i=0; i< n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(x.find(a[i]) != x.end())
        {
            cout << "NO" << endl;
            return;
        }
        x.insert(a[i]);
    }
    cout << "YES" << endl;
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
