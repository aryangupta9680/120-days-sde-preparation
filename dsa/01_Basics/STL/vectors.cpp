#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int>>vec;
    vec.push_back({1, 2});
    vec.emplace_back(4, 7);

    vector<int>arr(4, 100); // Creates 4 elements, and initializes each element with 100
    vector<int>arr9(3);
    vector<int>arr1(5, 100);
    vector<int>arr2(arr1);

    vector<int>temp = {2, 13, 5, 6, 8, 9};
    // cout << temp[0] << " " << temp.at(3) << endl;
    // cout << temp.back() << endl;


    // vector<int>::iterator it = temp.begin();
    // it++;
    // cout << *(it) << endl;
    // vector<int>::iterator it = temp.end();
    // vector<int>::iterator it = temp.rend();
    // vector<int>::iterator it = temp.rbegin();

    // for(vector<int>::iterator it = temp.begin(); it != temp.end();it++)
    // {
    //     cout << *(it) << endl;
    // }

    // for(auto it = temp.begin(); it != temp.end();it++)
    // {
    //     cout << *(it) << endl;
    // }

    // for(auto it : temp)
    // {
    //     cout << it << endl;
    // }

    // {2, 13, 5, 6, 8, 9}
    temp.erase(temp.begin()+1);
    // {2, 5, 6, 8, 9}
    
    // {2, 5, 6, 8, 9}
    temp.erase(temp.begin()+1, temp.begin()+3); // .erase(start, end)
    // {2, 8, 9}


    // insert functions
    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int>copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}
    // cout << v.size() << endl; // 7
    v.pop_back(); // {50, 50, 300, 10, 10, 100}

    vector<int>a1(2, 40);
    vector<int>a2(2, 80);
    a1.swap(a2);
    for(auto it: a1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << a1.size() << endl;
    cout << *(a1.begin()) << endl;
    cout << *(a2.begin()) << endl;
    a1.push_back(5);
    cout << a1.capacity() << endl;
    cout << a1.front() << " " << a1.back() << endl;


    vector<int>arrTemp = {1, 2, 3, 4, 5};
    // vector<int>::iterator it;
    // for(it = arrTemp.begin(); it != arrTemp.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // cout << endl;

    // vector<int>::reverse_iterator it;
    for(auto it = arrTemp.rbegin(); it != arrTemp.rend(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;

    return 0;
}