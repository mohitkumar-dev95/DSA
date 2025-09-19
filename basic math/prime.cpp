#include <bits/stdc++.h>
using namespace std;

void PrimeNum(int n)
{
   int count = 0;
   if(n==1){
    cout<<"no"<<endl;
   }
   else{
   for (int i = 2; i * i < n; i++)
   {
      if (n % i == 0)
      {
         count++;
      }
   }
   if (count == 0)
   {
      cout << "yes" << endl;
   }
   else
   {
      cout << "no" << endl;
   }
}
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      PrimeNum(num);
   }
}