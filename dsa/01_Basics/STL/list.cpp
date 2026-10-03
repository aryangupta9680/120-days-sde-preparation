#include <bits/stdc++.h>
#include <list>
using namespace std;

int main(){
    list<int>l;

    l.push_back(1);
    l.push_back(2);
    l.emplace_back(5);
    l.emplace_front(6);
    l.push_front(3);
    l.push_front(4);
    l.pop_back();
    l.pop_front();

    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}