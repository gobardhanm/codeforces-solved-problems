    #include<bits/stdc++.h>
    using namespace std;
     
     
    void solve() {
    	int n, m;
    	cin >> n >> m;
    	if(n < m) 
    		swap(n, m);
     
    	if(m == 1 and n >= 3)
    		cout << -1;
    	else 
    		cout << 2*n-2-(n+m)%2; 
     
    	cout << endl;
    }
     
    int main() {
    	ios::sync_with_stdio(false);
    	cin.tie(0);
    	int t=1;
    	cin >> t;
    	for(int i=1; i<=t; i++) {
    		solve();
    	}
    }
