#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    int ar[n];
    for(int i= 0; i < n; ++i){
        cin >> ar[i];
    }
    int oddct = 0, evenct= 0;
    for(int i= 0; i < n; ++i){
        oddct += ar[i];
        i++;
   }
    for(int i=1; i < n; ++i){
        evenct += ar[i];
        i++;
    }
    int diff = abs(oddct - evenct);
    if(diff % 2 == 0){
        cout << "YES" << nline;
    }else{
        cout << "NO" << nline;
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
