#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>m;

    m.insert({"tv", 230});
    m.insert({"camera", 60});
    m.emplace("shoes", 190);
    m.emplace("laptop", 540);


    for(auto p: m)
    {
        cout << p.first << " " << p.second << endl;
    }

    if(m.find("camera") != m.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "Not found\n";
    }
    
    
    return 0;
}