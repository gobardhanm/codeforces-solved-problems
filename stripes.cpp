#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    
    char arr[8][8];
    vector<int> r;
    for (int i=0; i< 8 ; ++i){
        for(int j=0; j< 8; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 'R'){
                r.push_back(i);
            }
        }
    }
    for(int i : r){
        bool ok= true;
        for(int j=0; j< 8; ++j){
            if(arr[i][j] != 'R'){
                ok= false;
                break;
            }
        }
        if(ok){
            cout << "R\n";
            return;
        }
    }
     cout << "B\n"; 
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
