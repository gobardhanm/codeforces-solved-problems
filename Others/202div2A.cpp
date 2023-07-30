#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0;
    bool found = true;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 25){
            count1++;
            continue;
        }else if(arr[i] == 50){
            count2++;
            if(count1 > 0){
                count1--;
                continue;
            }else{
                found = false;
                break;
            }
        }else{
            count3++;
            if(count1 > 0 && count2 > 0){
                count1--, count2--;
                continue;
            }else if(count1 > 2){
                count1 -= 3;
                continue;
            }else{
                found = false;
                break;
            }
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}
