#include<bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string org= "Timur";
    sort(org.begin(), org.end());
    if(s==org){
            cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
