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

    int t;
	cin >> t;
	vector<ll> primes;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)
			cout << primes[i] << " ";
		cout << endl;
	}
}
