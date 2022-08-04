#include <bits/stdc++.h>

using namespace std;

void search(){
  double sum=0,n,nbr; cin>>n;
  
  for(int i=0;i<n-1;i++){
    cin>>nbr;
    sum += nbr;
  }
   cout << n * (n + 1) / 2 - sum;



  
}

int main(){

  

  search();
  return 0;
}

