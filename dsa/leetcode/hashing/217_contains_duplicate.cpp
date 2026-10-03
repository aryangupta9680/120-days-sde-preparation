// Method 1: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n;i++)
        {
            for(int j = i+1; j < n;j++)
            {
                if(nums[i] == nums[j])
                {
                    return true;
                }
            }
        }

        return false;
    }
};


// Method 2: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 1; i < n;i++)
        {
            if(nums[i] == nums[i-1])
            {
                return true;
            }
        }

        return false;
    }
};


// Method 3: Unordered Set
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int num: nums)
        {
            if(s.count(num))
            {
                return true;
            }

            s.insert(num);
        }

        return false;
    }
};


// Method 4: Unordered Map / Frequency Count
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>freq;

        for(int x : nums)
        {
            freq[x]++;

            if(freq[x] > 1)
            {
                return true;
            }
        }

        return false;
    }
};