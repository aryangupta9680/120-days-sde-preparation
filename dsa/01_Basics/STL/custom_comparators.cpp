#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int>p1, pair<int, int>p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int, int>>vec2 = {{4, 1}, {7, 3}, {3, 1}, {9, 8}, {6, 2}, {6, 5}};
    sort(vec2.begin(), vec2.end(), comparator);
    for(auto p3 : vec2)
    {
        cout << p3.first << " " << p3.second << endl;
    }
    cout << endl;

    return 0;
}