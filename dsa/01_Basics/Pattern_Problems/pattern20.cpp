#include <bits/stdc++.h>
using namespace std;

void pattern20(int n) 
{
    // Method 1:
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     for (int col = 1; col <= (2 * n - 2 * row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // for (int row = n - 1; row >= 1; row--)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     for (int col = 1; col <= (2 * n - 2 * row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }


    // Method 2:
    int spaces = (2*n)-2;
    for(int i = 1; i <= (2*n)-1;i++)
    {
        int stars = i;
        if(i > n)
        {
            stars = (2*n)-i;
        }

        // stars
        for(int j = 1; j <= stars;j++)
        {
            cout << "* ";
        }
        
        // spaces
        for(int j = 1; j <= spaces;j++)
        {
            cout << "  ";
        }
        
        // stars
        for(int j = 1; j <= stars;j++)
        {
            cout << "* ";
        }

        cout << endl;
        if(i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    pattern20(n);
    return 0;
}
