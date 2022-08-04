#include<bits/stdc++.h>

#define ll long long 

using namespace std;

int main(){
  ll n,func = 0; cin>>n;
  ll cnt = 0;
  vector <ll> arr, set1, set2;

  for(ll i=0;i<n;i++){
   ll  a = cnt+=1;
  
    arr.push_back(a);
  }
      
   func = (arr.back() * (arr.back() + 1)) / 2;                                                                                                                          
                                                                                                                                                          
  if(func % 2 == 1){                                                                                                                                           
    cout<<"NO";    
   }                                                                                                                               
   else {                                                                                                                                                       
    cout<<"YES"<<endl;
    ll mid = func / 2;

    for(ll i=n; i>=1; i--){
      if(i <= mid){
        set1.push_back(i);
        mid -= i; 
      }
     else   
      set2.push_back(i);
    }
    cout<<set1.size()<<endl;
      for(ll i=0; i<(int) set1.size(); i++)
        cout<<set1[i]<<" ";
      cout<<"\n";
      
    cout<<set2.size()<<endl;
      for(ll i=0; i<(int) set2.size(); i++)
        cout<<set2[i]<<" ";
    

   }
  
    
  return 0;
}


