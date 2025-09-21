#include <bits/stdc++.h>
using namespace std;

void fun(int i, string a)
{
   if (i >= a.size()/ 2)
   {
      cout<<"yes"<<endl;
      return;
   }
   if(a[i]!=a[a.size() - i - 1]){
    cout<<"no"<<endl;
    return;
   }
   fun(i + 1, a);
}

int main()
{
   int t;
   cin >> t;
   cin.ignore();
   while (t--)
   {
      string a;
      getline(cin, a);
      fun(0, a);
    
   }
}