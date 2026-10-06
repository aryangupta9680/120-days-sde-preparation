// Method 1: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
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

            if(count == 1)
            {
                return nums[i];
            }
        }

        return -1;
    }
};




// Method 2: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n-1;i+=2)
        {
            if(nums[i] != nums[i+1])
            {
                return nums[i];
            }
        }

        return nums[n-1];
    }
};



// Method 3: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>freq;
        
        for(auto val : nums)
        {
            freq[val]++;
        }

        for(auto it : freq)
        {
            if(it.second == 1)
            {
                return it.first;
            }
        }

        return -1;
    }
};



// Method 4: XOR
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(auto num : nums)
        {
            result ^= num;
        }
        return result;
    }
};