// Method 1: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;
    }
};



// Method 2: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int>countS;
        unordered_map<char, int>countT;

        for(int i = 0; i < s.length();i++)
        {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS==countT;
    }
};



// Method 3: Frequency Array
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        vector<int>count(26, 0);
        for(int i = 0; i < s.length();i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }

        for(int val: count)
        {
            if(val != 0)
            {
                return false;
            }
        }

        return true;
    }
};