//Gobardhan Meher

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

//Problem: Print a Pedestal (Codeforces logo?)

void solve() {
    int n; cin >> n;
    int t = n - (n - 1);
    int sec = ((n-1) /3)+ 1; //second
    int fir = ((n-1)/3) + 2; //first
    int thi = (n - fir - sec); // third
    if(thi != 0){
        if(fir > sec && sec > thi){
        cout << sec << " " << fir << " " << thi;
    }else{
        fir += 1;
        sec -= 1;
        cout << sec << " " << fir << " " << thi;
    }
    }else{
        sec -= 1;
        thi += 1;
        cout << sec << " " << fir << " " << thi;
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
