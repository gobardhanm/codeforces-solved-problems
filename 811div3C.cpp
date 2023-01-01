#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    ll sum;
        cin >> sum;
        ll value = 9876543210LL;
        for(int i = 0; i < (1 << 11); i++){
            string temp = "";
            ll sumHere = sum;
            for(int j = 0; j < 10; j++){
                if(i & (1 << j)){
                    temp += char('0' + j);
                    sumHere -= j;
                }
            }
            if(sumHere != 0){
                continue;
            }
            ll valHere = stoll(temp);
            value = min(value, valHere);
        }
        cout << value << endl;
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
