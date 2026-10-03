#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(7);

    // s.insert(4);
    // s.insert(2);

    cout << "lower bound: " << *(s.lower_bound(5)) << endl;
    cout << "upper bound: " << *(s.upper_bound(5)) << endl;
    cout << "lower bound: " << *(s.lower_bound(19)) << endl; // s.end()
    cout << "size of s: " << s.size() << endl;
    for(auto val: s)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}