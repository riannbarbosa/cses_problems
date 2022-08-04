#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  string s;
  cin>>s;
  int res = 1;
  int len = s.size();
  for(int i=0; i<=len - 1 ; i++){
    int count = 1;
    while(s[i] == s[i + 1]){
        count++;
        i++;
    }
    res = max(res, count);
 
  }
  cout<<res;
 
  return 0;
}
