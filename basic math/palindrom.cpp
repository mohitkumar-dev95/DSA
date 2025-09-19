#include <bits/stdc++.h>
using namespace std;

void PalindromeNumber(int n)
{
   int rev = 0;
   int number = n;
   while (n > 0)
   {
      int digit = n % 10;
      n /= 10;
      rev = (rev * 10 + digit);
   }
   if (number == rev)
   {
      cout << "yes" << endl;
   }
   else
   {
      cout << "no" << endl;
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
      PalindromeNumber(num);
   }
}