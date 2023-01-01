#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int n;
cin >> n;
vector<int> ans;
int power = 1;
while (n > 0) {
	if (n % 10 > 0) {
		ans.push_back((n % 10) * power);
	}
	n /= 10;
	power *= 10;
}
cout << ans.size() << endl;
for (auto number : ans) cout << number << " ";
cout << endl;
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
