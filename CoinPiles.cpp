#include <bits/stdc++.h>

typedef long long ll;

void coinsP();

int main(){

  int t; std::cin>>t;

  while(t--)
    coinsP();

  return 0;
}

void coinsP(){
  ll a,b;

  std::cin >> a >> b;

  if(a<b) std::swap(a,b);
  if(a>2*b){
    std::cout<<"NO\n";
  }
  else{
    

  if((a+b) % 3 == 0) std::cout<<"YES\n";
  else std::cout<<"NO\n";

  }
}
