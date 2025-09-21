#include <bits/stdc++.h>
using namespace std;

//functional way
// int fun(int n){
//     if(n==0){ return 1;}
//     return n*fun(n-1);
  
    
// }

//parameterized way
void fun(int n,int mul){
    if(n<1){
        cout<<mul<<endl;
        return;
    }
    fun(n-1,n*mul);


}



int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      fun(num,1);
     
    //   int fact=fun(num);
    //   cout<<fact<<endl;
   }
}