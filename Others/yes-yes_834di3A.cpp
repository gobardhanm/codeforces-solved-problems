#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
// Gobardhan Meher

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 18;
	string res = " ";
	for(int i= 0; i < n; ++i){
		string s = "Yes";
		res += s;
	}
	int t;
	cin >> t;
	while(t--){
		string st;
		cin >> st;
		size_t found = res.find(st);
		if(found <= 54 && found >= 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
