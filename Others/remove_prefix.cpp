#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0 ; i< n; ++i){
            cin >> a[i];
        }
        bool yes= false;
        set<int> c;
        for(int i =n-1; i>= 0; --i){
            if(c.count(a[i])){
                cout << i+1 << "\n";
                yes =true;
                break;
            }
            c.insert(a[i]);
        }
        if(!yes)
            cout << 0 << "\n";
    }

    return 0;
}
