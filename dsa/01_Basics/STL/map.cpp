#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
    map<string, int>m;
    m["tv"] = 100;
    m["headphones"] = 200; 
    m["laptop"] = 300; 
    m["watches"] = 150; 
    m["tablet"] = 230; 

    m.insert({"camera", 60});
    m.emplace("shoes", 190);
    m.erase("tv");

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
    
    cout << "count : " << m.count("laptop") << endl;
    cout << "value : " << m["laptop"] << endl;
    return 0;
}