#include <bits/stdc++.h>
using namespace std;

void fun(int i, vector<int>& a, int n)
{
   if (i >= n / 2)
   {
      return;
   }
   swap(a[i], a[n - i - 1]);
   fun(i + 1, a, n);
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      vector<int> a(num);
      for (int i = 0; i < num; i++)
      {
         cin >> a[i];
      }

      fun(0, a, num);
      for (int i = 0; i < num; i++)
      {
         cout << a[i] << " ";
      }
      cout << endl;
   }
}