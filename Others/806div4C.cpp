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
    for(int i= 0; i < n ; ++i){
        cin >> ar[i];
    }
    for(int i= 0; i< n;++i){
        int x;
        cin >> x;
        string s;
        cin >> s;
        int temp = 0;
        for(int j= 0; j< x; ++j){
            if(s[j] == 'U'){
                temp--;
            }else if(s[j] == 'D'){
                temp++;
            }
        }
        int check = temp + ar[i];
         if(check > 9){
             cout << (ar[i] + temp) - 10 << " ";
         }
         else if(check < 0){
                cout << (ar[i] + temp) + 10 << " ";
         }
         else{ 
             cout << ar[i] + temp << " "; 
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