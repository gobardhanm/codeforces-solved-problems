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
            arr[i] = n - i;
        }
        if(n == 3){
            cout << "3 2 1" << endl;
            cout << "1 3 2" << endl;
            cout << "3 1 2" << endl;
             continue;
        }
        for(int i = 0; i < n; i++){
            for(auto j : arr)
                cout << j << " ";
            cout << endl;
            rotate(arr.begin(), arr.end() - 1, arr.end());
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
