#include <bits/stdc++.h>
using namespace std;
// void pattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void pattern(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// void pattern(int n)
// {
//     for (int i = n; i >= 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern(int n)
// {
//     for (int i = n; i >= 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<j;
//         }
//         cout << endl;
//     }
// }

// void pattern(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < n - i + 1; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < 2 * i + 1; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < n - i + 1; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < 2 * n - 2 * i - 1; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }
// void pattern2(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < 2 * i + 1; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }
// void pattern(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < i; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = 1; i <= 2 * n - 1; i++)
//    {
//       int star;
//       star = i;
//       if (i > n)
//       {
//          star = 2 * n - i;
//       }
//       for (int j = 1; j <= star; j++)
//       {
//          cout << "*";
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       int star = 1;
//       if (i % 2 == 0)
//       {
//          star = 0;
//       }
//       for (int j = 1; j <= i; j++)
//       {
//          cout << star;
//          star = 1 - star;
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = 1; i <= n; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          cout << j;
//       }
//       for (int j = 1; j <= 2 * n - 2 * i; j++)
//       {
//          cout << " ";
//       }
//       for (int j = i; j >= 1; j--)
//       {
//          cout << j;
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    int x = 1;
//    for (int i = 1; i <= n; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          cout << x;
//          x++;
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j <= i; j++)
//       {
//          cout <<(char)(65+j);
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = n; i>=1; i--)
//    {
//       for (int j = 0; j < i; j++)
//       {
//          cout <<(char)(65+j);
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    int x = 0;
//    for (int i = n; i >= 1; i--)
//    {
//       for (int j = 0; j < i; j++)
//       {
//          cout << (char)(65 + x);
//       }
//       x++;
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    int x = 0, star, y;
//    for (int i = 0; i < n; i++)
//    {
//       star = i;
//       x = 0;
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < 2 * i + 1; j++)
//       {
//          cout << (char)(65 + x);
//          if (j < star)
//             x++;
//          else
//             x--;
//       }
//       for (int j = 0; j < n - i - 1; j++)
//       {
//          cout << " ";
//       }
//       cout << endl;
//    }
// }

// void pattern(int n)
// {
//    char ch = 'E', k;
//    for (int i = 0; i < n; i++)
//    {
//       k = ch;
//       for (int j = 0; j <= i; j++)
//       {
//          cout << k;
//          k++;
//       }
//       ch--;
//       cout << endl;
//    }
// }

// void pattern2(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < n - i; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < 2 * i; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < n - i; j++)
//       {
//          cout << "*";
//       }
//       cout<<endl;
//    }
// }
// void pattern(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < i + 1; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < 2 * n - 2 * i - 2; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < i + 1; j++)
//       {
//          cout << "*";
//       }
//       cout<<endl;
//    }
// }

// void pattern(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < i + 1; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < 2 * n - 2 * i - 2; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < i + 1; j++)
//       {
//          cout << "*";
//       }
//       cout<<endl;
//    }
// }
// void pattern2(int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < n - i; j++)
//       {
//          cout << "*";
//       }
//       for (int j = 0; j < 2 * i+2; j++)
//       {
//          cout << " ";
//       }
//       for (int j = 0; j < n - i; j++)
//       {
//          cout << "*";
//       }
//       cout<<endl;
//    }
// }

// void pattern(int n){
//    for(int i=0;i<n;i++){
//       if(i==0 ||i== n-1){
//          for(int j=0;j<n;j++){
//             cout<<"*";
//          }
//       }
//       else{
//          for(int j=0;j<1;j++){
//             cout<<"*";
//          }
//          for(int j=0;j<n-2;j++){
//             cout<<" ";
//          }
//          for(int j=0;j<1;j++){
//             cout<<"*";
//          }
//       }cout<<endl;
//    }
// }


int main()
{
   int n;
   cin >> n;
   //pattern(n);
   //pattern2(n-1);
   
}