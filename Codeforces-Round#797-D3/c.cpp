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

//Problem: Restorinig the Duration of Tasks

void solve() {
    int n; cin >>n;
    int a[n] , b[n];
    fori{
        cin >> a[i];
    }
    fori{
        cin >> b[i];
    }
    cout << b[0] - a[0] << " " ;
    for(int i= 1; i< n; ++i){
        if(a[i] > b[i-1]){
            cout << b[i] - a[i] << " " ;
        }else{
            cout << b[i] - b[i-1] << " ";
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
