#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int x;
        cin >> x;
        vector<int> arr(3);
        for(auto &i : arr)
            cin >> i;
        set<int> keys;
        keys.insert(x);
        while(true){
            int p = keys.size();
            for(auto j : keys){
                if(arr[j - 1] != 0)
                    keys.insert(arr[j - 1]);
            }
            if((keys.size()) == p){
                break;
            }
        }
        cout << (keys.size() == 3 ? "YES" : "NO") << endl;
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
