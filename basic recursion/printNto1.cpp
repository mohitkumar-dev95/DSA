#include <bits/stdc++.h>
using namespace std;

void printNTo1(int i, int n)
{
   if (i > n)
   {
      return;
   }
   
   printNTo1(i + 1, n);
   cout << i << " ";
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num, i = 1;
      cin >> num;
      printNTo1(i, num);
   }
}