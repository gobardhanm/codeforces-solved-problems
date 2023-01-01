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
            cin >> arr[i];
        }
        int left = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] != i + 1){
                left = i;
                break;
            }
        } 
        if(left == -1){
            for(auto i : arr)
                cout << i << " " << endl;
            continue;
        }
        int right = n - 1;
        for(int j = left + 1; j < n; j++){
            if(arr[j] == left + 1){
                right = j;
                break;
            }
        }
        reverse(arr.begin() + left, arr.begin() + right + 1);
        for(auto i : arr){
            cout << i << " ";
        }
        cout << endl;
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
