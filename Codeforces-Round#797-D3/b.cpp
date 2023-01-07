//Gobardhan Meher

#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define nline "\n"
#define fori for(int i= 0; i<n; ++i)
#define forj for(int j = 0; j< n; ++j)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Problem: Array Decrements

void solve() {
    int n; cin >> n;
    int a[n] , b[n];
    fori{
        cin >> a[i];
    }
    fori{
        cin >> b[i];
    }
    int imx = INT_MAX , ck = imx;
    bool ans = true;

    fori{
        if(b[i] != 0) ck = min(ck, a[i] - b[i]);
    }
    if(ck < 0) ans = false;
    if(ck== imx) ans =true;
    
    fori{
        if(a[i] - b[i] > ck) ans = false;
        if(b[i] != 0 && a[i] - b[i] < ck) ans =false;
    }

    (ans) ? cout << "YES" << nline : cout << "NO" << nline;
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
