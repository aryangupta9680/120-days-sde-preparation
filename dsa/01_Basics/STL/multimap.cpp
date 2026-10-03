#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
    multimap<string, int>m;

    m.insert({"tv", 230});
    m.insert({"camera", 60});
    m.emplace("shoes", 190);
    m.emplace("laptop", 340);
    m.emplace("laptop", 540);
    m.emplace("laptop", 840);
    // m.erase("laptop");
    m.erase(m.find("laptop"));


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