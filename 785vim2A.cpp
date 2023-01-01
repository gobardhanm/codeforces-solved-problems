#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    string s;
        cin >> s;
        int n = s.length();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += s[i] - 'a' + 1;
        }
        if(n % 2 == 0){
            cout << "Alice " << sum << endl;
        }else{
            int val1 = min(s[0] - 'a' + 1, s.back() - 'a' + 1);
            sum -= 2 * val1;
            if(sum > 0){
                cout << "Alice " << sum << endl;
            }else{
                cout << "Bob " << -sum << endl;
            }
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
