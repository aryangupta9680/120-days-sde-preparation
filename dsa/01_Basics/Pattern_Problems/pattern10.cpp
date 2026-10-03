#include <bits/stdc++.h>
using namespace std;

void pattern10(int n) 
{
    // Method 1:
    for(int i = 0; i < n;i++) 
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n-2;i >= 0;i--)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    // Method 2:
    // for(int i = 1; i <= 2*n-1;i++)
    // {
    //     int stars = i;
    //     if(i > n)
    //     {
    //         stars = 2*n-i;
    //     }
    //     for(int j = 1; j <= stars;j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    pattern10(n);
    return 0;
}
