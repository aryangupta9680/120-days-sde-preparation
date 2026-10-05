// Method 1: Brute Force
// Time complexity: O(n^2)
// Space complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n;i++)
        {
            int count = 0;
            for(int j = 0; j < n;j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }
            if(count > n/2)
            {
                return nums[i];
            }
        }

        return -1;
    }
};



// Method 2: Sorting
// Time complexity: O(n logn)
// Space complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
    }
};



// Method 3: Hashing
// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(int i = 0; i < n;i++)
        {
            mp[nums[i]]++;
        }

        int count = 0, num = 0;
        for(auto it: mp)
        {
            if(it.second > count)
            {
                count = it.second;
                num = it.first;
            }
        }

        if(count > n/2)
        {
            return num;
        }
        else
        {
            return -1;
        }
    }
};


// Method 4: Boyer-Moore Voting Algorithm
// Time complexity: O(n)
// Space complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for(int num: nums)
        {
            if(count == 0)
            {
                candidate = num;
            }

            if(candidate == num)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }
};