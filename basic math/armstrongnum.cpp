#include <bits/stdc++.h>
using namespace std;

void ArmstrongNUM(int n){
    int Cuntdigit= (log10(n)+1);
    int number=n,paNumber=0;
    while(n>0){
        int digit=n%10;
        n/=10;
        paNumber+= round(pow(digit,Cuntdigit));
    }
    if(number==paNumber){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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
      ArmstrongNUM(num);
   }
}