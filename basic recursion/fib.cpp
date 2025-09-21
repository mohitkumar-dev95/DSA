#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return (fun(n-1)+fun(n-2));
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      int fib=fun(num);
      cout<<fib<<endl;
   }
}