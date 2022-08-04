#include <bits/stdc++.h>
typedef long long int ever;

using namespace std;

void increasing(ever n, ever arr[]);

int main(){

  ever n; std::cin>>n;
  ever arr[n];
  for(ever i=0;i<n;i++)
    std::cin>>arr[i];


  increasing(n, arr);
    

  return 0;

}

void increasing(ever n, ever arr[]){
  
  ever soma = 0;
  ever count = 0;

  for(ever i= 0; i<n-1; i++){

    soma = 0;
    if(arr[i + 1] <  arr[i]){
        soma = (arr[i] - arr[i+1]);
        arr[i+1] = arr[i];
        count = count + soma;
    }
    
   // std::cout<<arr[i - 1] << endl;
  
  }
 std::cout<< count;


}
