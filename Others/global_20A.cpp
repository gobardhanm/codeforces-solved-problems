#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            sum += a - 1;
        }
        string a = "errorgorn", b = "maomao90";
        cout << ((sum % 2 == 0) ? b : a) << endl;
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
