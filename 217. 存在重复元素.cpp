class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            us.emplace(nums[i-1]);
            if(us.count(nums[i]))
            {
                return true;
            }
        }
        return false;
    }
};
