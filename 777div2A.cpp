#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

bool helper(string a, string b){
    if(a.length() < b.length())
        return true;
    if(a.length() > b.length())
        return false;
    return b > a;
}

void solve() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a = "";
        string b = "";
        int sum = 0;
        char last = '1';
        while(sum < n){
            if(last == '1'){
                a += '2';
                sum += 2;
            }else{
                a += '1';
                sum += 1;
            }
            last = a.back();
        }
        string ans = "";
        if(sum == n){
            ans = a;
        }
        sum = 0, last = '2';
        while(sum < n){
            if(last == '1'){
                b += '2';
                sum += 2;
            }else{
                b += '1';
                sum += 1;
            }
            last = b.back();
        }
        if(sum == n){
            if(helper(ans, b)){
                ans = b;
            }
        }
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    /* cin >> tc; */
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
