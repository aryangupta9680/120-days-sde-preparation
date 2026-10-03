#include <bits/stdc++.h>
using namespace std;

void pattern5(int n) 
{
    for(int i = 1; i <= n;i++) 
    {
        for(int j = 0; j < n-i+1;j++) // print (n - row + 1) times 
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    pattern5(n);
    return 0;
}
