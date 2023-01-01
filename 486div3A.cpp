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
        map<int, vector<int>> s;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            s[a].pb(i + 1);
        }
        cout << (sz(s) >= k ? "YES" : "NO") << endl;
        if(sz(s) >= k){
            while(k--){
                cout << (s.begin())->ss[0] << " ";
                s.erase(s.begin());
            }
            cout << endl;
        }
}
