#include <bits/stdc++.h>
using namespace std;

void checkGrade(int n1, int n2)
{
    char x;
    cin >> x;
    switch (x)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Very Good" << endl;
        break;

    case 'C':
        cout << "Good" << endl;
        break;
    case 'D':
        cout << "Pass" << endl;
        break;
    case 'F':
        cout << "Fail" << endl;
        break;

    default:
        cout << "Invalid" << endl;
        break;
    }
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        checkGrade(num1, num2);
    }

    return 0;
}
