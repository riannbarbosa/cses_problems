#include <bits/stdc++.h>
 
#define MOD 1000000007
 
typedef long long ll;
 
using namespace std;
 
int main(){
 
    ll n; cin >> n;  
    
    ll param = 1;
    for(int i =0; i<n; i++){
 
        param *= 2;
        param %= MOD;
    }
 
    cout<< param  << endl;
 
 
    return 0;
}
