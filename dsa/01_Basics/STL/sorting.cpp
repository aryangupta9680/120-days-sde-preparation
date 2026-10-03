#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {4, 1, 7, 5, 9};
    // sort(arr, arr+5);
    sort(arr, arr+5, greater<int>());
    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;


    vector<int>vec = {23, 91, 24, 12, 65, 32};
    // sort(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), greater<int>());
    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;


    vector<pair<int, int>>vec1 = {{3, 1}, {7, 3}, {4, 1}, {9, 8}, {6, 2}, {6, 1}};
    sort(vec1.begin(), vec1.end());
    for(auto p : vec1)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    return 0;
}