#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll turn = 0;
    ll last = 1;
    while(true){
        if(turn == 0){
            if(a < last){
                cout << "Vladik" << endl;
                return 0;
            }else{
                a -= last;
                last++;
            }
        }else{
            if(b < last){
                cout << "Valera" << endl;
                return 0;
            }else{
                b -= last;
                last++;
            }
        }
        turn ^= 1;
    }
}
