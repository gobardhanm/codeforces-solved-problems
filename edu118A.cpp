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

void solve() {
    string a, b;
		int extra1, extra2;
		cin >> a >> extra1;
		cin >> b >> extra2;
		while(a.length() > 0 && a.back() == '0'){
			a.pop_back();
			extra1++;
		}
		while(b.length() > 0 && b.back() == '0'){
			b.pop_back();
			extra2++;
		}
		if(a.length() + extra1 > b.length() + extra2){
			cout << ">" << endl;
		}else if(a.length() + extra1 <	b.length() + extra2){
			cout << "<" << endl;
		}else{
			if(a > b){
				cout << ">" << endl;
			}else if(a < b){
				cout << "<" << endl;
			}else{
				cout << "=" << endl;
			}
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
