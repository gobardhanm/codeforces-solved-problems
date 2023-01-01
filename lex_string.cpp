#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int n, m, k;
	string a, b;
	cin >> n >> m >> k >> a >> b;
 
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());
 
	int cnt_a=0, cnt_b=0;
	string c;
 
	while(!a.empty() and !b.empty()) {
		bool gde = b.back() < a.back();
		if(gde and cnt_b==k) gde = false;
		if(!gde and cnt_a==k) gde = true;
		
		if(gde) {
			c.push_back(b.back());
			b.pop_back();
			cnt_b++;
			cnt_a=0;
		} else {
			c.push_back(a.back());
			a.pop_back();
			cnt_a++;
			cnt_b=0;
		}
	}
	cout << c << "\n";
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
