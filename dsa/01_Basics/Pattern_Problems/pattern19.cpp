#include <bits/stdc++.h>
using namespace std;

void pattern19(int n) 
{
    // Method 1:
    // for(int row = n; row >= 1; row--)
    // {
    //     for(int col = 1; col <= row;col++)
    //     {
    //         cout << "* ";
    //     }

    //     for(int col = 1; col <= (2*n)-(2*row);col++)
    //     {
    //         cout << "  ";
    //     }

    //     for(int col = 1; col <= row;col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // for(int row = 1; row <= n; row++)
    // {
    //     for(int col = 1; col <= row;col++)
    //     {
    //         cout << "* ";
    //     }

    //     for(int col = 1; col <= (2*n)-(2*row);col++)
    //     {
    //         cout << "  ";
    //     }

    //     for(int col = 1; col <= row;col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }




    // Method 2:
    int spaces = 0;
    for(int i = 0; i < n;i++)
    {
        // stars 
        for(int j = 1; j <= n-i;j++)
        {
            cout << "* ";
        }
        
        // spaces
        for(int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        
        // stars
        for(int j = 1; j <= n-i;j++)
        {
            cout << "* ";
        }

        spaces += 2;
        cout << endl;
    }

    spaces = (2*n)-2;
    for(int i = 1; i <= n;i++)
    {
        // stars 
        for(int j = 1; j <= i;j++)
        {
            cout << "* ";
        }
        
        // spaces
        for(int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        
        // stars
        for(int j = 1; j <= i;j++)
        {
            cout << "* ";
        }

        spaces -= 2;
        cout << endl;
    }
    
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    pattern19(n);
    return 0;
}
