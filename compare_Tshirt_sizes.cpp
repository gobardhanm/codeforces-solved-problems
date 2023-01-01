#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    if((s1.back()) == (s2.back())){
        if( s1.back() == 'S' ) {
             if(s1.size() > s2.size()) cout << "<" << endl;
             else if(s1.size() < s2.size()) cout << ">" << endl;
             else cout << "=" << endl;
        }
        else if( s1.back() == 'L' ){
             if(s1.size() > s2.size()) cout << ">" << endl;
             else if(s1.size() < s2.size()) cout << "<" << endl;
             else cout << "=" << endl;
   
        }
        else cout << "=" << endl;
    }

    else if(s1.back() != s2.back()){
        if(s1.back() == 'L') cout << ">" << endl;
        else if( s2.back() == 'L' ) cout << "<" << endl;
        else if(s1.back() == 'M') cout << ">" << endl;
        else if(s2.back() == 'M') cout << "<" << endl;

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
