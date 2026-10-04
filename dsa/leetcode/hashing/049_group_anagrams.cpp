// Time Complexity: O(n * (k log k))
// Space Complexity: O(n*k)
// n = number of strings
// k = maximum length of a string
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        for(auto s: strs)
        {
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }

        vector<vector<string>>ans;
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};