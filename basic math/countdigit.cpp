#include <bits/stdc++.h>
using namespace std;

// void CountDigitNumber(int num)
// {
//    int count = 0;
//    while (num > 0)
//    {
//       count++;
//       num /= 10;
//    }
//    cout << count << endl;
// }
void CountDigitNumber(int n){
    int num=(int)(log10(n)+1);
    cout<<num<<endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num;
      cin >> num;
      CountDigitNumber(num);
   }
}