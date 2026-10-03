#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int, int>p = {1, 2};
    cout << p.first << endl;
    cout << p.second << endl;
    
    pair<string, int>s = {"hello", 44};
    cout << s.first << endl;
    cout << s.second << endl;
    
    pair<int, pair<char, int>>temp = {1, {'a', 4}};
    cout << temp.first << endl;
    cout << temp.second.first << endl;
    cout << temp.second.second << endl;
    
    vector<pair<int, int>>vec = {{1, 2}, {2, 3}, {3, 4}};
    vec.push_back({98, 32}); // adds a pair to the vector
    vec.emplace_back(4, 5); // constructs a pair directly in the vector
    for(pair<int, int>v : vec)
    {
        cout << v.first << " " << v.second << endl;
    }
    

    return 0;
}