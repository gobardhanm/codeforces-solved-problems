#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum == x){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            int sum1 = 0;
            for(int i = 0; i < n; i++){
                if(sum1 + arr[i] == x){
                    swap(arr[i], arr.back());
                }
                cout << arr[i] << " ";
                sum1 += arr[i];
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
