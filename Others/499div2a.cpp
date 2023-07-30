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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(all(s));
    int ans = s[0] - 'a' + 1;
    k--;
    char prev = s[0];
    for(int i = 1; i < n && k > 0; i++){
        if(s[i] - prev >= 2){
            ans += s[i] - 'a' + 1;
            k--;
            prev = s[i];
        }
    } 
    if(k == 0){
        cout << ans << endl;
    }else{  
        cout << -1 << endl;
    }
}
