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
        int maxLeft = 0, minRight = n - 1;
        int left = 0, right = n - 1;
        while(left < n){
            if(arr[left] == 1){
                maxLeft = left;
                left++;
            }
            else
                break;
        }
        while(right > left){
            if(arr[right] == 1){
                minRight = right;
                right--;
            }
            else
                break;
        }
        cout << max(0, minRight - maxLeft) << endl;
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
