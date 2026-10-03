#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);

    queue<int>q1;
    q1.swap(q);
    cout << "q size: " << q.size() << endl;
    cout << "q1 size: " << q1.size() << endl;

    cout << "front: " << q1.front() << endl;

    while(!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    return 0;
}