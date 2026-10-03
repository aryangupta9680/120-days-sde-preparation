#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>temp = {1, 2, 3, 4, 5};
    // reverse(temp.begin(), temp.end());
    // reverse(temp.begin()+1, temp.begin()+3);
    // for(auto v: temp)
    // {
    //     cout << v << " ";
    // }
    // cout << endl;
    cout << *max_element(temp.begin(), temp.end());
    cout << endl;
    cout << binary_search(temp.begin(), temp.end(), 2);
    cout << endl;

    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;

    string s1 = "cab";
    prev_permutation(s1.begin(), s1.end());
    cout << s1 << endl;

    cout << max(8, 2) << endl;
    cout << min(8, 2) << endl;

    int a = 3, b = 1;
    swap(a, b);
    cout << a << " " << b << endl;

    int num = 15;
    cout << __builtin_popcount(num) << endl;
    long int num1 = 15;
    cout << __builtin_popcountl(num1) << endl;
    long long num2 = 15;
    cout << __builtin_popcountll(num2) << endl;

    return 0;
}