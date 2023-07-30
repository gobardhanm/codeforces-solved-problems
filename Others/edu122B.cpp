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
        set<int> s1;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                sum1++;
            else
                sum2++;
        }
        if(sum1 == sum2){
            cout << sum1 -1 << endl;
        }else{
            cout << min(sum1, sum2) << endl;
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
