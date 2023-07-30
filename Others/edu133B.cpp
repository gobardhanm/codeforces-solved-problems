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
        for(int i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        cout << n << endl;
        for(auto i : arr){
            cout << i << " ";
        }
        cout << endl;
        for(int i = n - 1; i >= 1; i--){
            swap(arr[i], arr[i - 1]);
            for(auto j : arr){
                cout << j << " ";
            }
            cout << endl;
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
