#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int cnt = 0;
    while(true){
        int points = n * m;
        if(points > 0){
            cnt++;
            n--, m--;
        }else{
            break;
        }
    }
    cout << (cnt & 1 ? "Akshat" : "Malvika") << endl;
}
