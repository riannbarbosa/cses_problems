#include <bits/stdc++.h>

typedef long long int ll ;
using namespace std;

void spiral(int t);

int main(){

  int t; cin >> t;
  
  spiral(t);
  
  
  return 0;
}

void spiral(int t){
  
   
    ll x,y;
    while(t--){

      cin >> x >> y;

      if(x < y){

        if(y % 2 != 0){

          ll beta = y * y;

          ll dell = beta - x + 1;

          cout << dell << endl;
      
        }
        else{
        
          ll beta = (y - 1) * (y - 1) + 1;

          ll dell = beta + x - 1;

          cout << dell << endl;

      }
  }
  else{

      if(x % 2 == 0){

        ll teta = x * x;

        ll dell2 = teta - y + 1;

        cout<< dell2 << endl;
      }
      else{

        ll teta = (x - 1) * ( x - 1) + 1;

        ll dell2 = teta + y - 1;
        
        cout<< dell2 << endl;
      }
    
    }
  }

} 
