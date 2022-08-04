#include <bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;
 
void palin(ll n);
 
int main (){
 
  ll n;
 
  cin>>n;
  palin(n);
 
 
  return 0;
}
 
 
 
void palin(ll n){
  ll count = 0;
  for(ll i = 5; n / i >= 1; i *= 5){
 
    count += n/i;
  
  }
 
  cout<<count<<endl;
 
}
