#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 70)
    {
        cout << "Grade B";
    }
    else if (marks >= 50)
    {
        cout << "Grade C";
    }
    else if (marks >= 35)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }
}