#include <iostream>
#include <limits>
using namespace std;

int main(){
    string s;
    cout << "Enter your name: ";
    getline(cin, s);
    cout << s << endl;

    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Value of n is: " << n << "\n";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s1;
    cout << "Enter your college name: ";
    getline(cin, s1);
    cout << s1 << endl;

    return 0;
}