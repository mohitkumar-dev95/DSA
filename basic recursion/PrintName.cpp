#include <bits/stdc++.h>
using namespace std;

void PrintName(int i,int n){
    if(i>n){ return;}
    cout<<"mohit kumar"<<endl;
    return PrintName(i+1,n);
    
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int num,i=1;
      cin >> num;
      PrintName(i,num);
   }
}