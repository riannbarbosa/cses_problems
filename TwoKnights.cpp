#include <bits/stdc++.h>
 
typedef long long int table; 
 
using namespace std;
void jojo();
 
int main(){
 
    jojo();
 
    return 0;
}
void jojo(){
 
    int n; std::cin>>n;
    for(table i=1;  i<=n; i++){
        table k = pow(i,2);
        table a = (k*(k-1)) / 2;
        table b = 4*(i-2)*(i-1);
        table x = a - b;
 
        std::cout<<x<<endl;
 
    }
 
 
}
 
/* ----===========--------------============------------===========----------==========-
 
 T H  A N K S !!!!!!!!!!!!!!!!!!!!!!! BY @RIANB.
 
LOVE YOU SZ
 
 
----------=============---------------===============-------------============---------------------=*
