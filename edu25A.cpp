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
	string s;
	cin >> s;
	string ans = "";
	int prevCount = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '0'){
			ans += to_string(prevCount);
			prevCount = 0;
		}else{
			prevCount++;
		}
	}
	ans += to_string(prevCount);
	cout << ans << endl;
}
