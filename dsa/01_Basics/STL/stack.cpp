#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int>s1;
    s1.swap(s);
    cout << "s size: " << s.size() << endl;
    cout << "s1 size: " << s1.size() << endl;

    cout << "top: " << s1.top() << endl;

    while(!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    return 0;
}