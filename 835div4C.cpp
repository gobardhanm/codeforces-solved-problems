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
    int ar[n], br[n];
    forn{
        cin >> ar[i];
    }
    forn{
        br[i] = ar[i];
    }
    int s = sizeof(ar)/sizeof(ar[0]);
    sort(ar, ar+s);
    for(int i=0; i< n;++i){
        if(br[i] == ar[n-1]){
            cout << ar[n-1] - ar[n-2] << " ";
        }else{

            cout << br[i] - ar[n-1] << " ";
        }
    }
    cout << nline;
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
