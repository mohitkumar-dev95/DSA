#include <bits/stdc++.h>
using namespace std;
// parameterized way
// void fun(int n , int sum){
//    if(n<1){
//         cout<<sum<<endl;
//         return;
//    }
//    return fun(n-1,n+sum);
    
// }

//functional way
int fun(int n){
    if(n==0) return 0;
    return n+fun(n-1);
  
    
}




int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num,sum;
      cin >> num;
      //fun(num,sum);
       sum=fun(num);
      cout<<sum<<endl;
   }
}