//Gobardhan Meher

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define fori for(int i= 0; i<n; ++i)
#define forj for(int j=0; j< n; ++j)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Problem: Make Even

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ans1 = 0, ans2 = 0, n;
	string k;
	cin >> t;
	while (t--) {
		cin >> n;
		k = to_string(n);
		if (n % 2 == 0)
			cout << "0\n";
		else if (k[0] % 2 == 0)
			cout << "1\n";
		else {
			for (int i = 0; i < k.length(); i++) {
				if (k[i] % 2 == 0) {
					ans1++;
					break;
				}
			}
			if (ans1 > 0)
				cout << "2\n";
			else 
				cout << "-1\n";
			ans1 = 0;
		}
    }
}
