#include <bits/stdc++.h>
using namespace std;

void pattern11(int n) 
{
    // Method 1:
    // int count;
    // for(int i = 0; i < n;i++) 
    // {
    //     if(i%2 == 0)
    //     {
    //         count = 1;
    //     }
    //     else
    //     {
    //         count = 0;
    //     }

    //     for(int j = 0; j <= i;j++)
    //     {
    //         cout << (count%2) << " ";
    //         count++;
    //     }

    //     cout << endl;
    // }



    // Method 2:
    int count;
    for(int i = 0; i < n;i++) 
    {
        if(i%2 == 0)
        {
            count = 1;
        }
        else
        {
            count = 0;
        }

        for(int j = 0; j <= i;j++)
        {
            cout << count << " ";
            count = 1 - count;
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    pattern11(n);
    return 0;
}
