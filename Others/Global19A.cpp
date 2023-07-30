#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> prefix(n);
        vector<int> suffix(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        prefix[0] = arr[0];
        for(int i = 1; i < n; i++){
            prefix[i] = max(prefix[i - 1], arr[i]);
        }
        suffix[n - 1] = arr[n - 1];
        for(int i = n - 2; i >= 0; i--){
            suffix[i] = min(suffix[i + 1], arr[i]);
        }
        bool found = false;
        for(int i = 0; i < n - 1; i++){
            if(prefix[i] > suffix[i + 1])
                found = true;
        }
        cout << (!found ? "No" : "Yes") << endl;
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
