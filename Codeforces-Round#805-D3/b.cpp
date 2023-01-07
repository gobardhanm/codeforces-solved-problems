//Gobardhan Meher

#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define nline "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Problem: Polycarp Writes a String from Memory

void solve() {
    string s;
    cin >> s;
    set<char> st;
    int len = s.length() , ct = 0;
    for(int i= 0 ; i< len; ++i){
        st.insert(s[i]);
        if(st.size() > 3){
            ct++;
            st.clear();
            st.insert(s[i]);
        }
        
}
if(!st.empty()){
    ct++;
}
cout << ct << nline;
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
