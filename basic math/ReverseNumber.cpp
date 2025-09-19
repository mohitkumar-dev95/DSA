#include <bits/stdc++.h>
using namespace std;

void ReverseNumber(int n){
   int rev=0;
   while(n>0){
      int digit=n%10;
      n/=10;
      rev=(rev*10+digit);
   }
   cout<<rev<<endl;
    
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      ReverseNumber(num);
   }
}