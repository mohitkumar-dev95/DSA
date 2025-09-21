#include <bits/stdc++.h>
using namespace std;

void print1ToN(int i, int n)
{
   if (i > n)
   {
      return;
   }
   cout << i << " ";
   print1ToN(i + 1, n);
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num, i = 1;
      cin >> num;
      print1ToN(i, num);
   }
}