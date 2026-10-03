#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main(){
    priority_queue<int>q;
    q.push(5);
    q.push(2);
    q.push(21);

    while(!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(98);
    pq.push(43);
    pq.push(56);
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}